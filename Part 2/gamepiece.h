#ifndef GAMEPIECE_H
#define GAMEPIECE_H

class GamePiece
{
    public:
        GamePiece();
        GamePiece(char* newLabel);

        char* getLabel();
        char* toString();
};

#endif