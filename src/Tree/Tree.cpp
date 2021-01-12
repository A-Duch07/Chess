//
// Created by Anthony on 12/30/2020.
//

#include "Tree.h"

Tree::Tree() : root_(nullptr), nodes_(new std::unordered_map<std::string_view, Square*>) {}

Tree::Tree(Square *root) : root_(root), nodes_(new std::unordered_map<std::string_view, Square*>) {}

Tree::~Tree() {
    for(auto & move : *nodes_){
        delete move.second;
    }
    clear();
    delete nodes_;
    delete root_;
}

Square *Tree::getRoot() const {
    return root_;
}

std::unordered_map<std::string_view, Square *> *Tree::getMoves() const {
    return nodes_;
}

void Tree::setRoot(Square *root) {
    root_ = root;
}

void Tree::setMoves(std::unordered_map<std::string_view, Square *> *moves) {
    nodes_ = moves;
}

void Tree::add(Square *node) {
    nodes_->insert(std::make_pair(node->getId(), node));
}

void Tree::erase(const Square &node) {
    nodes_->erase(node.getId());
}

Square* Tree::find(const Square &node) const {
    try{
        return nodes_->at(node.getId());
    } catch (std::out_of_range& outOfRange) {
        return nullptr;
    }
}

void Tree::clear() {
    nodes_->erase(nodes_->begin(), nodes_->end());
    nodes_->clear();
}
