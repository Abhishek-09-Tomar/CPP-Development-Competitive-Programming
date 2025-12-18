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

int main(){

    // step-2:

    // create individual nodes
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);

    // connects them
    first->next = second;
    second->next = third;

    // Traverse and print
    Node *temp = first;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
};