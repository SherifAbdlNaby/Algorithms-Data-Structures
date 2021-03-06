//
// Created by Sherif on 4/21/2017.
//

#ifndef BST_BST_H
#define BST_BST_H
#include <iostream> //for std::pair<>, cout, cin;
using namespace std;

class BST {
private:
    class node;
    node* root;
    node* insertRec(int data, node *parent);  //Recursive(Insert node* and return new root address(or unchanged in mid-recursive calls).
    node* eraseRec(int data, node *parent);   //Recursive(Erase node* with data = parameter, and return new root after deletion).
    void  recursivePrint(node* parent);       //Recursively print all children of given node in sorted order.
public:
    BST();
    int max();                                //Return the maximum element in the Tree.
    int min();                                //^..........minimum....................^
    void insert(int data);                    //Insert data and call the recursiveInsertions #Wrapper
    void erase (int data);                    //Erase  data and call the recursiveErase      #Wrapper
    bool search(int data);                    //Search for a node with the given data, return FALSE if unsuccessful.
    void printInOrder();                      //Print The tree in sorted order, calls recursivePrint from the root. #Wrapper
};


class BST::node {
public:
    int data;
    node* leftChild;
    node* rightChild;
    node();
    node(int data, node *rightChild, node *leftChild);
    node* getMinNode();                     //Return node* to the next smaller element in the tree.
    node* getMaxNode();                     //Return node* to the next greater element in the tree.
};

#endif //BST_BST_H