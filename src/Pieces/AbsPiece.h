//
// Created by Anthony on 12/30/2020.
//

#pragma once
#ifndef CHESS_ABSPIECE_H
#define CHESS_ABSPIECE_H

class Tree;
class Square;

#include "Tree/Tree.h"
#include <string>
#include <unordered_map>


class AbsPiece {
    public:
        // Constructors and destructor
        AbsPiece(Tree *moves, int value, int row, int col);
        ~AbsPiece();

        // Getters
        Tree getMoves() const;
        int getValue() const;
        int getRow() const;
        int getCol() const;
        virtual void calculateMoves() = 0;

    private:
        Tree *moves_;
        const int value_;
        int row_, col_;

};


#endif //CHESS_ABSPIECE_H