#include <iostream>

using namespace std;
/*
Goal: Re-implementation linked-list.
*/

class Node{
public:
    int data;
    Node* next;
};

//Function prints all data from the given node

void printList(Node* p){
    while (p != NULL){
        cout << p->data << " ";
        p = p->next;
    }
}



int main()
{
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->next = NULL;
    printList(head);
}
