//
// Created by Alexandre on 2021-01-02
//

#include "Rook.h"

Rook::Rook(Tree *moves, int value, std::string id){
    moves_ = moves;
    value_ = value;
    id_ = id;
}

Rook::~Rook() {

}

std::string Rook::getId() const {
    return id_;
}

Tree Rook::getMoves() const {
    Tree *moves = nullptr;
    //TODO: Check every square on the same row or the same col as the rook
    //TODO: if there's a piece on a square between the rook and the current square, it cannot move to the current square
    //

    return *moves;
}

int Rook::getValue() const {
    return 0;
}
