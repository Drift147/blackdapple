//
// Created by falcon3 on 6/09/2021.
//

#ifndef OOP_ASSIGNMENT_1_2_HUMANPLAYER_H

#pragma once
#include "Player.h"
#include "Board.h"
#include <iostream>
#include <iomanip>

using namespace std;

class HumanPlayer : public Player {

public:


    Board()  // default constructor (all dwarves are 10 inches)
    {
        boardSize = 10;
    }


    HumanPlayer(char ps) :Player(ps) {}
    ~HumanPlayer() {}

    void getMove(Board board, int& x, int& y) {
        do {
            cout << "Enter move: ";
            cin >> x >> y;
            cout << endl;
            x = x - 1;
            y = y - 1;
        } while (!board.validInput(x, y));
        return;
    }
};



#define OOP_ASSIGNMENT_1_2_HUMANPLAYER_H

#endif //OOP_ASSIGNMENT_1_2_HUMANPLAYER_H
