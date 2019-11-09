#ifndef GAMEPIECE_H
#define GAMEPIECE_H

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

class GamePiece
{
    private:
        char label[30];
        
    public:
        GamePiece();
        GamePiece(char* newLabel);

        char* getLabel();
        char* toString();
        
};

#endif