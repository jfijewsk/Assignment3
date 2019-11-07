#ifndef GAMEBOARD_H
#define GAMEBOARD_H

#include "gamepiece.h"

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