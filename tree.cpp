#include <iostream>
using namespace std;

class Node
{
 public:
    int info;
    Node *leftchild;
    Node *rightchild;
    
    //constructor for the node class
    Node()
    {
        leftchild = nullptr; //initialize left child to null
        rightchild = nullptr; //initialize right child to null
    }
};

class BinaryTree
{
    public:
    Node *ROOT;

    BinaryTree()
    {
        ROOT = nullptr; //initializing root to null
    }

    void insert()
    {
        int x;
        cout << "masukkan nilai: ";
        cin >> x;

        //step 1 : allocate memory for the new node
        Node *newNode = new Node();

        //step 2 : assign value to the data field of new node
        newNode->info = x;

        //step 3: make the left n right child of the new node point to null
        newNode->leftchild = nullptr;
        newNode->rightchild = nullptr;

        //step 4: locate the node which will be the parent of the node to be inserted
        Node *parent = nullptr;
    }
}