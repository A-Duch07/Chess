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
    AbsPiece();
    ~AbsPiece();
    virtual std::string getId() const = 0;
    virtual Tree getMoves() const = 0;
    virtual int getValue() const = 0;
    virtual int calculateMoves() = 0;

private:
    Tree *moves_;
    int value_;

};


#endif //CHESS_ABSPIECE_H