//
// Created by Anthony on 12/30/2020.
//

#include "Tree.h"

Tree::Tree() : root_(nullptr), moves_(new std::unordered_map<std::string, Square*>) {}

Tree::Tree(Square *root) : root_(root), moves_(new std::unordered_map<std::string, Square*>) {}

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

Square *Tree::getRoot() const {
    return root_;
}

std::unordered_map<std::string, Square *> *Tree::getMoves() const {
    return moves_;
}

void Tree::setRoot(Square *root) {
    root_ = root;
}

void Tree::setMoves(std::unordered_map<std::string, Square *> *moves) {
    moves_ = moves;
}

void Tree::add(Square *node) {
    moves_->insert(std::make_pair(node->getId(), node));
}

void Tree::erase(const Square &node) {
    moves_->erase(node.getId());
}

Square* Tree::find(const Square &node) const {
    try{
        return moves_->at(node.getId());
    } catch (std::out_of_range& outOfRange) {
        return nullptr;
    }
}

void Tree::clear() {
    moves_->erase(moves_->begin(), moves_->end());
    moves_->clear();
}
