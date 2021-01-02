//
// Created by Anthony on 12/30/2020.
//

#ifndef CHESS_TREE_H
#define CHESS_TREE_H

#include "Board/Square.h"
#include <unordered_map>
#include <algorithm>

class Tree {
public:
    Tree();
    Tree(const Square& root);
    ~Tree();
    Square* getRoot() const;
    std::unordered_map<std::string, Square*>* getMoves() const;
    void setRoot(Square* root);
    void setMoves(std::unordered_map<std::string, Square*>* moves);

private:
    Square *root_;
    std::unordered_map<std::string, Square*> *moves_;

};


#endif //CHESS_TREE_H
