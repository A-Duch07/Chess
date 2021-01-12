//
// Created by Alexandre on 2021-01-02
//

#ifndef CHESS_ROOK_H
#define CHESS_ROOK_H

#include "../AbsPiece.h"

class Rook : public AbsPiece{
public:
    Rook(Tree *moves, int value, int row, int col);
    ~Rook();
    void calculateMoves() override;

private:
    static const int value_ = 5;

};


#endif //CHESS_ROOK_H