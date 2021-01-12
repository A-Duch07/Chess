//
// Created by Anthony on 12/30/2020.
//

#pragma once
#ifndef CHESS_TREE_H
#define CHESS_TREE_H

#include "Board/Square.h"
#include <unordered_map>
#include <algorithm>
#include <string_view>

class Tree {
    public:
        // Constructors and destructor
        Tree();
        explicit Tree(Square *root);
        ~Tree();

        // Getters and setters
        Square* getRoot() const;
        std::unordered_map<std::string_view, Square*>* getMoves() const;
        void setRoot(Square* root);
        void setMoves(std::unordered_map<std::string_view, Square*>* moves);

        // Methods
        // Should probably consider this : https://en.wikipedia.org/wiki/Rule_of_three_(C%2B%2B_programming)#Rule_of_Three
        void add(Square *node);
        void erase(const Square& node);
        Square* find(const Square& node) const; // Maybe should be const not to modify the tree in anyway when trying to find a node
        void clear();

    private:
        Square *root_;
        std::unordered_map<std::string_view, Square*> *nodes_;

};


#endif //CHESS_TREE_H
