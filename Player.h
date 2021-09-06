//
// Created by falcon3 on 6/09/2021.
//

#ifndef OOP_ASSIGNMENT_1_2_PLAYER_H
#pragma once
#include "Board.h"
#include <iostream>
#include <iomanip>

using namespace std;

//class Player
//
//
//{
//protected:
//	int playerType;
//
//public:
//
//	void getMove(Board b, int& x, int& y);
//	int getType(menuChoice);


class Player {
protected:
    char playerSymbol;
public:
    Player(char ps) {
        playerSymbol = ps;
    }
    virtual ~Player() {}

    virtual void getMove(Board, int& x, int& y) = 0;
    char getPlayerSymbol() {
        return playerSymbol;
    }
};




#define OOP_ASSIGNMENT_1_2_PLAYER_H

#endif //OOP_ASSIGNMENT_1_2_PLAYER_H
