#include <iostream>
using namespace std;

// step-1:
class Node
{
public:
    int data;
    Node *next; // pointer to next node

    Node(int val)
    { // constructor
        data = val;
        next = NULL;
    }
};

// step-3: create a function to insert nodes

void insertAtEnd(Node* &head, int val){

}

int main() {

    // step-2: create the linked list manually
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);

    // connects them
    first->next = second;
    second->next = third;

    // traverse and print
    
};