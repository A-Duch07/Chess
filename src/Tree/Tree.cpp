//
// Created by Anthony on 12/30/2020.
//

#include "Tree.h"

Tree::Tree() : root_(nullptr), moves_(new std::unordered_map<std::string, Square*>) {}

Tree::Tree(const Square& root) : root_(nullptr), moves_(new std::unordered_map<std::string, Square*>) {}

Tree::~Tree() {
    for(auto & move : *moves_){
        delete move.second;
    }
    // Dont know if these lines are necessary (16-17)
    moves_->erase(moves_->begin(),moves_->end());
    moves_->clear();
    delete moves_;
    delete root_;
}

Square *Tree::getRoot() const{
    return root_;
}

std::unordered_map<std::string, Square *> *Tree::getMoves() const{
    return moves_;
}

void Tree::setRoot(Square *root) {
    root_ = root;
}

void Tree::setMoves(std::unordered_map<std::string, Square *> *moves) {
    moves_ = moves;
}