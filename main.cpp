#include <iostream>
#include "Board.h"
#include "Player.h"
#include "HumanPlayer.h"
#include <vector>

using namespace std;

int main()
{
    int menuChoice;
    int boardSize{};

    cout << "Please enter the size of the board (size will be squared): " << endl;
    cin >> (boardSize);
    if (boardSize < 3)
    {
        boardSize = 3;
    }

    Board blockerGameBoard(boardSize);



    blockerGameBoard.displayBoard();

    // BlockerGame game(board, player1, player2);

    Player *player1, *player2;

    cout << "Choose a level to run: " << endl;
    cout << "Human vs Human" << endl;
    cout << "Human vs Computer" << endl;
    cout << "Human vs Computer (Hard)" << endl;

    cin >> menuChoice;

    if (menuChoice == 1) {
        player1 = new HumanPlayer(1, "Human (Crosser)");
        player2 = new HumanPlayer(-1, "Human (Blocker)");
    }
        /* else if (menuChoice == 2) {
             player1 = new HumanPlayer(1, "Human (Crosser)");
             player2 = new computerPlayer(-1, "Computer (Blocker)");
         }
         else if (menuChoice == 3){
             player1 = new HumanPlayer(1, "Human (Crosser)");
             player2 = new computerPlayerHard(-1, "ComputerHard (Blocker)");
         }*/
    else {
        return 0;

    }

    // srand(time(0));
    // int boardSize{ 5 };


    // game.play();

    // delete board;
    // delete player1;
    // delete player2;

    // // system("pause");
    // return 0;


}

