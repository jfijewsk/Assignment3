#include "gamepiece.h"
#include <string.h>
#include <iostream>

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
 * Sets up a default game piece with the label of "---"
 * @parma piece Game piece to setup
 */
GamePiece::GamePiece() {
    strncpy(this->label, "---", 30);
}

/*
 * Sets up a default game piece with the label of the newLabel
 * @parma piece Game piece to setup
 * @parma newLabel new label for the game piece
 */
GamePiece::GamePiece(char* newLabel) {
    newLabel[strlen(newLabel)] = 0;
    memcpy(this->label, newLabel, 30);
}

/*
 * Getter for the label
 * @parma piece Game piece to return the name of
 * @return label of the piece
 */
char* GamePiece::getLabel() {
    return this->label;
}

/*
 * Function for printing the game pieces out
 * @parma piece Game piece to return the name of
 * @return text string of the game piece
 */
char* GamePiece::toString() {
    int stringLength = strlen(this->label);
    char* result = this->label;

    // Make sure label is only 3 char long
    if (stringLength > 3) {
        // Add string terminator
        result[3] = '\0';

    }

    // Make sure label not not shorter than 3 char
    if (stringLength < 3) {
        for (int i = stringLength; i < 3; i++) {
            result[i] = ' ';
        }

        // Add string terminator
        result[3] = '\0';
    }

    return result;
}
