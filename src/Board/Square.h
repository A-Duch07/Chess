//
// Created by Alexandre Touchette on 2020-12-31.
//

#ifndef CHESS_SQUARE_H
#define CHESS_SQUARE_H
#define SDL_MAIN_HANDLED

class AbsPiece;

#include <string>
#include "Pieces/AbsPiece.h"

class Square{
    public:
        Square(const AbsPiece& piece, int row, int col);

        bool GetAvailability() const;
        int GetRow() const;
        char GetCol() const;
        std::string GetPosition() const;
        
    private:
        AbsPiece *piece_;
        int row_;
        int col_;
        char *id_;

};


#endif //CHESS_SQUARE_H