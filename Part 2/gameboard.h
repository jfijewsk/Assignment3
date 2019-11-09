#ifndef GAMEBOARD_H
#define GAMEBOARD_H

#include "gamepiece.h"

/*
 * Assignment 3 - Part 2
 * 
 * This program is a simple game that allows a user to create a custom sized
 * game board, add game pieces and then move the game pieces. 
 * 
 * Completion time: 8 hours
 *
 * @author James Fijewski
 * @version 1.0
 */

class GameBoard
{
    public:
        GameBoard(int rows, int cols);

        bool isSpaceValid(int row, int col);
        bool addPiece(GamePiece piece, int row, int col);
        bool movePiece(int srcRow, int srcCol, int destRow, int destCol);
        void print();
};

#endif