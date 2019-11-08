#ifndef GAMEPIECE_H
#define GAMEPIECE_H

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