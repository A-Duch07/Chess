//
// Created by Anthony on 12/30/2020.
//

#include "AbsPiece.h"

AbsPiece::AbsPiece(Tree *moves, int value) : moves_(moves), value_(value) {}

AbsPiece::~AbsPiece() {
    delete moves_;
}

Tree AbsPiece::getMoves() const {
    return *moves_;
}

int AbsPiece::getValue() const {
    return value_;
}