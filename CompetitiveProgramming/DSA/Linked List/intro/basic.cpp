// define a node - you can represent a node as a class or struct:

// step-1: 
#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;

    Node(int val){
        data = val;
        next = NULL;
    }
};