using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Animations;

public class GameCubic : MonoBehaviour
{
    //float turnTimeLeft;
    bool player1Turn;

    float pieceSize = 0.08f;

    // button params
    int buttonOffsetX = 1000;
    int buttonLeftOffset = 60;
    int buttonOffsetY = 200;
    int buttonSize = 50;
    int buttonSpacing = 10;

    int[][][] boardArr;// = new int[][] { { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 } };

    // Start is called before the first frame update
    void Start()
    {
        // initialize board array with all 0's
        boardArr = new int[3][][];
        for (int i = 0; i < 3; i++)
        {
            boardArr[i] = new int[3][];

            for (int j = 0; j < 3; j++)
            {
                boardArr[i][j] = new int[3];
                for (int k = 0; k < 3; k++)
                {
                    boardArr[i][j][k] = 0;
                }
            }
        }

        player1Turn = true;

        PlaceButtons();

    }

    void PlaceButtons()
    {
        for (int p = 1; p <= 2; p++)
        {
            //layer
            for (int i = 0; i < 3; i++)
            {
                //x value
                for (int j = 0; j < 3; j++)
                {
                    //y value
                    for (int k = 0; k < 3; k++)
                    {
                        string concatName = p.ToString() + " " + i + " " + j + " " + k;
                        GameObject b = (GameObject)Instantiate(Resources.Load("Button"));
                        b.GetComponent<Button>().onClick.AddListener(delegate { PlaceSphereInPosition(concatName); });
                        b.name = concatName;

                        GameObject canvas = GameObject.Find("Canvas");
                        b.transform.parent = canvas.transform;

                        // multiplier for x offset (one player goes right, other left)
                        int multOffsetX = p == 1 ? -1 : 1;
                        int layerOffsetY = (i - 1) * buttonOffsetY;
                        b.transform.localPosition = new Vector2(multOffsetX * buttonOffsetX - buttonLeftOffset + buttonSize * j + buttonSpacing * j,
                           layerOffsetY - buttonSize * k - buttonSpacing * k);
                        //b.transform.localScale = new Vector2(buttonSize, buttonSize);
                        b.GetComponent<RectTransform>().SetSizeWithCurrentAnchors(RectTransform.Axis.Vertical, buttonSize);
                    }
                }
            }

        }
    }

    void UpdateButtons()
    {
        for (int p = 1; p <= 2; p++)
        {
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    for (int k = 0; k < 3; k++)
                    {
                        string concatName = p + " " + i + " " + j + " " + k;
                        GameObject b = GameObject.Find(concatName);
                        //b.GetComponentInChildren<Text>().text = boardArr[i][j][k].ToString();
                        int player = boardArr[i][j][k];
                        b.GetComponent<Image>().color = (player == 0 ? Color.gray : (player == 1 ? Color.white: Color.black));
                    }
                }
            }

        }
    }


    public void PlaceSphereInPosition(string buttonName)
    {
        string[] turnInfo = buttonName.Split(' ');

        int player = int.Parse(turnInfo[0]);

        string xStr = turnInfo[1];
        string yStr = turnInfo[2];
        string zStr = turnInfo[3];
        int x = int.Parse(xStr);
        int y = int.Parse(yStr);
        int z = int.Parse(zStr);

        bool p1HitButton = player == 1;

        // ignore button presses if it's not their turn
        if (p1HitButton != player1Turn)
        {
            return;
        }

        // bounds checking
        if (x < 0 || x > 2 || y < 0 || y > 2 || z < 0 || z > 2)
        {
            return;
        }

        // check if there's already a piece in that location
        if (boardArr[x][y][z] != 0)
        {
            return;
        }

        // set the internal representation of the board
        boardArr[x][y][z] = player;

        for (int i = 0; i < 3; i++)
        {
            Debug.Log("BOARD ARR LV " + i  
            + "\n" + boardArr[i][0][0] + boardArr[i][0][1] + boardArr[i][0][2]
            + " | " + boardArr[i][1][0] + boardArr[i][1][1] + boardArr[i][1][2]
            + " | " + boardArr[i][2][0] + boardArr[i][2][1] + boardArr[i][2][2]);
        }


        // make sphere with appropriate size and color
        GameObject sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
        sphere.tag = "Sphere";
        sphere.transform.localScale = new Vector3(pieceSize, pieceSize, pieceSize);
        Color color = p1HitButton ? Color.white : Color.black;
        sphere.GetComponent<Renderer>().material.SetColor("_Color", color);

        // put sphere in appropriate location on board
        GameObject board = GameObject.FindWithTag("Board");
        Vector3 boardCenter = board.transform.position;
        sphere.transform.position = boardCenter + new Vector3(-(y - 1) * 0.1f, (x - 1) * 0.1f, (z - 1) * 0.1f);

        Debug.Log("made sphere");

        int winner = CheckForWinCubed();

        if (winner != 0)
        {
            Color c = winner == 1 ? Color.white : Color.black;

            Debug.Log("winner winner chicken dinner! winner is: " + winner.ToString());

            ChangeBoardColor(c);
            ChangeSpheresColor(c);
        }
        else
        {
            Debug.Log("no one has won yet");
            // when one player has made a move, it's now the other player's turn
            player1Turn = !player1Turn;
        }
    }

    void SetAlpha(string matTag, float alpha)
    {
        GameObject g = GameObject.FindGameObjectWithTag(matTag);
        if (g)
        {
            Material mat = g.GetComponent<Renderer>().material;
            Color color = mat.color;
            color.a = alpha;
            mat.color = color;
        }

    }

    int CheckForWinCubed()
    {
        // for each direction (x, y, z)
        // for each of the three levels (0, 1, 2)
        // create board for that level, check for win on that board
        // check for the four "diagonal diagonal" wins

        // first direction
        {
            for (int j = 0; j < 3; j++)
            {
                int winner = CheckForWin(boardArr[j]);
                if (winner != 0) return winner;
            }
        }

        int[][] boardArrTemp = new int[3][];

        for (int k = 0; k < 3; k++)
        {
            boardArrTemp[k] = new int[3];
            for (int l = 0; l < 3; l++)
            {
                boardArrTemp[k][l] = 0;
            }
        }

        // second direction
        {
            for (int j = 0; j < 3; j++)
            {
                for (int k = 0; k < 3; k++)
                {
                    for (int l = 0; l < 3; l++)
                    {
                        boardArrTemp[k][l] = boardArr[k][j][l];
                    }
                }
                int winner = CheckForWin(boardArrTemp);
                if (winner != 0) return winner;
            }
        }
        // third direction
        {
            for (int j = 0; j < 3; j++)
            {
                for (int k = 0; k < 3; k++)
                {
                    for (int l = 0; l < 3; l++)
                    {
                        boardArrTemp[k][l] = boardArr[k][l][j];
                    }
                }
                int winner = CheckForWin(boardArrTemp);
                if (winner != 0) return winner;
            }
        }
        // fourth direction (tilted)
        {
            for (int j = 0; j < 3; j++)
            {
                int k = j;
                for (int l = 0; l < 3; l++)
                {
                    boardArrTemp[k][l] = boardArr[j][k][l];
                }
            }
            int winner = CheckForWin(boardArrTemp);
            if (winner != 0) return winner;
        }
        // fifth direction (tilted other way)
        {
            for (int j = 0; j < 3; j++)
            {
                int k = 2 - j; 
                for (int l = 0; l < 3; l++)
                {
                    boardArrTemp[k][l] = boardArr[j][k][l];
                }
            }
            int winner = CheckForWin(boardArrTemp);
            if (winner != 0) return winner;
        }

        return 0;

    }

    int CheckForWin(int[][] arr)
    {
        for (int i = 0; i < 3; i++)
        {
            int winner = CheckForTypeOfWin(i, arr);
            if (winner != 0) return winner;
        }
        return 0;

    }

    // 0 = horiz, 1 = vert, 2 = diag
    int CheckForTypeOfWin(int type, int[][] arr)
    {
        if (type == 2)
        {
            int i = arr[0][0];
            if (i == arr[1][1] && i == arr[2][2] && i != 0)
            {
                Debug.Log("diag win");
                return i;
            }

            i = arr[0][2];
            if (i == arr[1][1] && i == arr[2][0] && i != 0)
            {
                Debug.Log("diag win");
                return i;
            }
        }
        else
        {
            int p1Count = 0;
            int p2Count = 0;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    if (type == 0)
                    {
                        if (arr[i][j] == 1)
                        {
                            p1Count += 1;
                        }
                        if (arr[i][j] == 2)
                        {
                            p2Count += 1;
                        }
                    }
                    else if (type == 1)
                    {
                        if (arr[j][i] == 1)
                        {
                            p1Count += 1;
                        }
                        if (arr[j][i] == 2)
                        {
                            p2Count += 1;
                        }
                    }

                }
                if (p1Count == 3)
                {
                    return 1;
                }
                else if (p2Count == 3)
                {
                    return 2;
                }
                p1Count = 0;
                p2Count = 0;
            }
        }

        return 0;
    }

    void ChangeBoardColor(Color color)
    {
        GameObject[] lines = GameObject.FindGameObjectsWithTag("Line");

        foreach (GameObject l in lines)
        {
            l.GetComponent<Renderer>().material.SetColor("_Color", color);
        }
    }

    void ChangeSpheresColor(Color color)
    {
        GameObject[] spheres = GameObject.FindGameObjectsWithTag("Sphere");

        foreach (GameObject s in spheres)
        {
            s.GetComponent<Renderer>().material.SetColor("_Color", color);
        }
    }


    // Update is called once per frame
    void Update()
    {
        ChangeBoardColor(player1Turn ? Color.white : Color.black);

        UpdateButtons();
    }

}
