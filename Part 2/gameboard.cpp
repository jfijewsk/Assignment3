#include "gameboard.h"
#include <string.h>
#include <iostream>

using namespace std;

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

/*
 * Function for setting up the game board
 * @parma game_board game board to set up
 * @parma rows number of rows the game board will have
 * @parma cols number of columns the game board will have
 */
GameBoard::GameBoard(int rows, int cols) {
    this->rows = rows;
    this->cols = cols;

    board = new GamePiece*[rows];

    // Loop through the board and assign columns to the rows and add 
    // empty game pieces in those positions.
    for (int i = 0; i < rows; i++) {
        board[i] = new GamePiece[cols];
    }
}

/*
 * Function for checking if that space is valid on the board
 * @parma game_board game board to check space on
 * @parma row location of the row to check
 * @parma col location of the column to check
 * @return returns true if valid, false if invalid
 */
bool GameBoard::isSpaceValid(int row, int col) {
    // Check if the row value is valid
    if (row >= 0 && row <= this->rows) {

        // Check if column value is valid
        if (col >= 0 && col <= this->cols) {

            return true;
        }
    }

    return false;
}

/*
 * Adds a new piece to the game board
 * @parma piece game piece to add
 * @parma row location of the row to add the piece on
 * @parma col location of the column to add the piece on
 * @return returns true if added, false if not added
 */
bool GameBoard::addPiece(GamePiece piece, int row, int col) {
    // Check to see if the location is a valid location
    if (isSpaceValid(row, col)) {

        // Check if the location is empty
        if (strncmp(board[row][col].getLabel(), "---", 3) == 0) {

            // Add the piece into the location
            board[row][col] = piece;

            return true;
        }

    }

    return false;
}

/*
 * Moves pre-existing game piece on the board
 * @parma srcRow location of the row the piece to be moved is on 
 * @parma srcCol location of the column the piece to be moved is on \
 * @parma destRow location of the row the piece to be moved is going
 * @parma destCol location of the column the piece to be moved is going
 * @return returns true if moved, false if not moved
 */
bool GameBoard::movePiece(int srcRow, int srcCol, int destRow, int destCol) {

    // Check for valid locations
    if (isSpaceValid(srcRow, srcCol) && isSpaceValid(destRow, destCol)) {

        // Only move the piece if there is not another piece at that location
        if (strncmp(board[destRow][destCol].getLabel(), "---", 3) == 0) {

            GamePiece empty;
            board[destRow][destCol] = board[srcRow][srcCol];
            board[srcRow][srcCol] = empty;

            return true;
        }
    }

    return false;
}

/*
 * Prints the game board out
 */
void GameBoard::print() {

    // Print the game board header
    printf("The GameBoard \n----------------------\n");

    // Loop through and print all pieces and print
    for (int i = 0; i < this->rows; i++) {
        for (int j = 0; j < this->cols; j++) {
            cout << board[i][j].toString() << " ";
        }
        cout << "\n";
    }
}
