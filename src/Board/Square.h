//
// Created by Alexandre Touchette on 2020-12-31.
//

#pragma once
#ifndef CHESS_SQUARE_H
#define CHESS_SQUARE_H
#define SDL_MAIN_HANDLED

class AbsPiece;

#include <string>
#include "Pieces/AbsPiece.h"

class Square{
    public:
        Square(AbsPiece *piece, int row, int col);

        bool hasPiece() const;
        int getRow() const;
        int getCol() const;
        char* getId() const;
        
    private:
        AbsPiece *piece_;
        int row_;
        int col_;
        char *id_;

};


#endif //CHESS_SQUARE_H