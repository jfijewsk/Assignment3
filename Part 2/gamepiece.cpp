#include "gamepiece.h"

GamePiece::GamePiece() {
    strcpy(this->label, "---", 30);
}

GamePiece::GamePiece(char* newLabel) {
}

char* GamePiece::getLabel() {
    return "";
}

char* GamePiece::toString() {
    return "";
}
