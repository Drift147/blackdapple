#pragma once
#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;
class Board
{
     char** boardData = new boardData*[rows];
    int boardSize;

    for


public:
    Board(int boardSize) // custom constructor - (maybe need vector)
    {
        this->boardSize = boardSize; //todo
        boardData = new ;
    }

    Board()  // default constructor (all dwarves are 10 inches)
    {
        boardSize = 10;
        boardData = new vector(boardSize, vector<char>(boardSize, ' '));
    }

    void displayBoard()
    {
        cout << "\n\n\n";

        for (int row = 0; row < boardSize; row++)
        {
            cout << setw(5) << row + 1;
        }
        cout << "\n";
        header();
        cout << "\n";

        for (int y = 0; y < boardSize; y++)
        {
            cout << setw(2) << y + 1;
            cout << "|";

            for (int x = +1; x < boardSize; x++)
            {
                cout << setw(5) << " |";
            }
            cout << "    |";
            cout << endl;
        }
        cout << boardData;

        footer();
    }

    void header()
    {
        cout << "  ";
        for (int i = 0; i < boardSize; i++)
        {

            cout << setw(5) << "-----";
        }
    }

    void footer()
    {

        cout << " ";
        for (int i = 0; i < boardSize; i++)
        {

            cout << setw(5) << "-----";
        }
    }

    bool addMove(int x1, int y1, int x2, int y2)
    {
        if (!validInput(x1, y1))
            return;

        board[x1][y1] = playerSymbol;

        noOfMoves++;
    }

    bool validInput(int x, int y)
    {

    }


    ~Board() {};

};



//
//	bool checkWin();
//
//
//	void printBoard();
//