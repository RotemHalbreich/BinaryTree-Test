#include "doctest.h"
#include "BinaryTree.hpp"

using namespace std;
using namespace ariel;

TEST_CASE("Creating a Binary Tree")
{
    BinaryTree<int> tree;

    //Illegal operations:
    CHECK_THROWS(tree.add_left(3, 4));
    CHECK_THROWS(tree.add_right(1, 2));
    CHECK_THROWS(tree.add_left(6, 4));
    CHECK_THROWS(tree.add_right(3, 9));
    CHECK_THROWS(tree.add_left(1, 3));
    CHECK_THROWS(tree.add_right(3, 4));
    CHECK_THROWS(tree.add_left(6, 4));
    CHECK_THROWS(tree.add_right(3, 8));
    CHECK_THROWS(tree.add_left(2, 4));
    CHECK_THROWS(tree.add_right(2, 2));
    CHECK_THROWS(tree.add_left(5, 7));

    //Legal operations:
    CHECK_NOTHROW(tree.add_root(1));
    CHECK_NOTHROW(tree.add_left(1, 2));
    CHECK_NOTHROW(tree.add_left(2, 4));
    CHECK_NOTHROW(tree.add_left(4, 8));
    CHECK_NOTHROW(tree.add_right(2, 5));
    CHECK_NOTHROW(tree.add_right(4, 9));
    CHECK_NOTHROW(tree.add_left(5, 10));
    CHECK_NOTHROW(tree.add_right(5, 11));
    CHECK_NOTHROW(tree.add_right(1, 3));
    CHECK_NOTHROW(tree.add_right(3, 7));
    CHECK_NOTHROW(tree.add_left(3, 6));
    CHECK_NOTHROW(tree.add_right(6, 13));
    CHECK_NOTHROW(tree.add_left(7, 14));
}

/*Tree:
                   1
                  / \
                 /   \
                /     \
               /       \
              2         3
             / \       / \
            /   \     /   \
           4     5   6     7
          /|    /|    \   /
         8 9  10 11   13 14
    */