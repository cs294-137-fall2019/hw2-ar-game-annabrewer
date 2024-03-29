﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Animations;

public class Game : MonoBehaviour
{
    //float turnTimeLeft;
    bool player1Turn;

    float pieceSize = 0.08f;

    // button params
    int buttonOffsetX = 300;
    int buttonOffsetY = 0;
    int buttonSize = 50;
    int buttonSpacing = 10;

    int[][] boardArr;// = new int[][] { { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 } };

    // Start is called before the first frame update
    void Start()
    {
        boardArr = new int[3][];
        player1Turn = true;

        for (int i = 0; i < 3; i++)
        {
            boardArr[i] = new int[3];

            for (int j = 0; j < 3; j++)
            {
                boardArr[i][j] = 0;
            }
        }

        PlaceButtons();

    }

    void PlaceButtons()
    {
        for (int p = 1; p <= 2; p++)
        {
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    string concatName = p.ToString() + " " + i.ToString() + " " + j.ToString();
                    GameObject b = (GameObject)Instantiate(Resources.Load("Button"));
                    b.GetComponent<Button>().onClick.AddListener(delegate { PlaceSphereInPosition(concatName); });
                    b.name = concatName;

                    GameObject canvas = GameObject.Find("Canvas");
                    b.transform.parent = canvas.transform;

                    // multiplier for x offset (one player goes right, other left)
                    int multOffsetX = p == 1 ? -1 : 1;
                    b.transform.localPosition = new Vector2(multOffsetX * buttonOffsetX + buttonSize * i + buttonSpacing * i,
                       buttonOffsetY - buttonSize * j - buttonSpacing * j);
                    //b.transform.localScale = new Vector2(buttonSize, buttonSize);
                    b.GetComponent<RectTransform>().SetSizeWithCurrentAnchors(RectTransform.Axis.Vertical, buttonSize);
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
                    string concatName = p + " " + i.ToString() + " " + j.ToString();
                    GameObject b = GameObject.Find(concatName);
                    b.GetComponentInChildren<Text>().text = boardArr[i][j].ToString();
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
        int x = int.Parse(xStr);
        int y = int.Parse(yStr);

        bool p1HitButton = player == 1;

        // ignore button presses if it's not their turn
        if (p1HitButton != player1Turn)
        {
            return;
        }

        // bounds checking
        if (x < 0 || x > 2 || y < 0 || y > 2)
        {
            return;
        }

        // check if there's already a piece in that location
        if (boardArr[x][y] != 0)
        {
            return;
        }

        // set the internal representation of the board
        boardArr[x][y] = player;

        Debug.Log("BOARD ARR"
        + "\n" + boardArr[0][0] + boardArr[0][1] + boardArr[0][2]
        + " | " + boardArr[1][0] + boardArr[1][1] + boardArr[1][2]
        + " | " + boardArr[2][0] + boardArr[2][1] + boardArr[2][2]);

        // make sphere with appropriate size and color
        GameObject sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
        sphere.transform.localScale = new Vector3(pieceSize, pieceSize, pieceSize);
        Color color = p1HitButton ? Color.white : Color.black;
        sphere.GetComponent<Renderer>().material.SetColor("_Color", color);

        // put sphere in appropriate location on board
        GameObject board = GameObject.FindWithTag("Board");
        Vector3 boardCenter = board.transform.position;
        sphere.transform.position = boardCenter + new Vector3(-(x - 1) * 0.1f, 0, (y - 1) * 0.1f);

        Debug.Log("made sphere");

        int winner = CheckForWin(boardArr);

        if (winner != 0)
        {
            Color c = winner == 1 ? Color.red : Color.blue;

            Debug.Log("winner winner chicken dinner! winner is: " + winner.ToString());

            ChangeBoardColor(c);
        }
        else
        {
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
            int i = boardArr[0][0];
            if (i == boardArr[1][1] && i == boardArr[2][2])
            {
                Debug.Log("diag win");
                return i;
            }

            i = boardArr[0][2];
            if (i == boardArr[1][1] && i == boardArr[2][0])
            {
                Debug.Log("diag win");
                return i;
            }
        }
        else
        {
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    if (type == 0)
                    {
                        if (j != 0 && boardArr[i][j] != boardArr[i][j - 1])
                        {
                            break;
                        }

                        if (j == 2)
                        {
                            Debug.Log("straight line win");
                            return boardArr[i][j];
                        }
                    }
                    else
                    {
                        if (i != 0 && boardArr[i][j] != boardArr[i - 1][j - 0])
                        {
                            break;
                        }

                        if (i == 2)
                        {
                            Debug.Log("straight line win");
                            return boardArr[i][j];
                        }
                    }
                }
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


    // Update is called once per frame
    void Update()
    {
        ChangeBoardColor(player1Turn ? Color.white : Color.black);

        UpdateButtons();
    }


        // update board color

        /*
        GameObject text = GameObject.FindGameObjectWithTag("Debug");

        //text.GetComponent<Text>().text = "T: " + turnTimeLeft.ToString(); //+ " TP: " + Time.deltaTime.ToString();

        // 1 player at a time
        string activeTag = player1Turn ? "PlayerA" : "PlayerB";
        string passiveTag = player1Turn ? "PlayerB" : "PlayerA";

        SetAlpha(activeTag, 0.5f);
        SetAlpha(passiveTag, 0.05f);

        turnTimeLeft -= Time.deltaTime;

        string player = player1Turn ? "A" : "B";

        text.GetComponent<Text>().text = "T: " + turnTimeLeft.ToString() + " P: " + player;

        if (turnTimeLeft <= 0.0f)
        {
            //UnityEngine.Debug.Log("Player " + player + " has placed a sphere");
            PlaceSphere();

            int winner = CheckForWin();

            if (winner != 0)
            {
                Color color = winner == 1 ? Color.white : Color.black;

                ChangeBoardColor(color);
            }
            else
            {
                turnTimeLeft = 2.0f;
                player1Turn = !player1Turn;
            }
        }
        */

    /*

    }

    // place a tic tac toe piece - white for player A, black for player B
    void PlaceSphere()
    {

        GameObject sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);

        Color color = player1Turn ? Color.white : Color.black;
        sphere.GetComponent<Renderer>().material.SetColor("_Color", color);

        GameObject board = GameObject.FindWithTag("Board");

        if (board)
        {
            Vector3 boardCenter = board.transform.position;

            GameObject player;
            if (player1Turn)
            {
                player = GameObject.FindWithTag("PlayerA");
            }
            else
            {
                player = GameObject.FindWithTag("PlayerB");
            }

            Vector3 playerPosition = player.transform.position;

            float minDist = float.MaxValue;
            int minDistI = 0;
            int minDistJ = 0;

            for (int i = -1; i <= 1; i++)
            {
                for (int j = -1; j <= 1; j++)
                {
                    float dist = Vector3.Distance(playerPosition, boardCenter - new Vector3(i * 0.05f, 0, j * 0.05f));

                    if (dist < minDist && boardArr[i][j] == 0)
                    {
                        minDist = dist;
                        minDistI = i;
                        minDistJ = j;
                    }
                }
            }
            // put sphere in closest open spot to its current location
            sphere.transform.position = boardCenter - new Vector3(minDistI * 0.1f, 0, minDistJ * 0.1f);

            // update board array
            boardArr[minDistI + 1][minDistJ + 1] = player1Turn ? 1 : 2;
        }

    }*/

}
