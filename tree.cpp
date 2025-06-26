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
    } 
}