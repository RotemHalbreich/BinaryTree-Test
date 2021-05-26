#pragma once

#include <ostream>

namespace ariel
{
    template <typename T>

    class BinaryTree
    {

    private:
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// inner Class Node:
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
        class Node
        {
            T data;
            Node *left;
            Node *right;

            Node(T d) : data(d), left(NULL), right(NULL) {}
            Node(const T &d, Node *r, Node *l) : data(d), left(l), right(r) {}

            friend class BinaryTree;
        };

        Node *root;

    public:
        BinaryTree &add_root(const T &r)
        {
            return *this;
        }

        BinaryTree &add_left(const T &parent, const T &new_left_child)
        {
            return *this;
        }

        BinaryTree &add_right(const T &parent, const T &new_right_child)
        {
            return *this;
        }

        friend std::ostream &operator<<(std::ostream &os, BinaryTree<T> const &BT)
        {
            return os;
        }

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// inner Class Iterator:
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
        class iterator
        {

        private:
            Node *current;

        public:
            iterator(Node *ptr = nullptr) : current(ptr) {}

            T &operator*() const
            {
                return current->data;
            }

            T *operator->() const
            {
                return &(current->data);
            }

            iterator &operator++()
            {
                //current = current->next;
                return *this;
            }

            //const iterator operator++(int) -> Deleted ~const~ only for the [make tidy] to run smoothly
            iterator operator++(int)
            {
                iterator temp = *this;
                //current = current->next;
                return temp;
            }

            bool operator==(const iterator &other) const
            {
                return current == other.current;
            }

            bool operator!=(const iterator &other) const
            {
                return current != other.current;
            }
        };

        iterator begin_preorder()
        {
            return iterator{root};
        }

        iterator end_preorder()
        {
            return iterator{root};
        }

        iterator begin_inorder()
        {
            return iterator{root};
        }

        iterator end_inorder()
        {
            return iterator{root};
        }

        iterator begin_postorder()
        {
            return iterator{root};
        }

        iterator end_postorder()
        {
            return iterator{root};
        }

        iterator begin()
        {
            return iterator{root};
        }

        iterator end()
        {
            return iterator{root};
        }
    };
}