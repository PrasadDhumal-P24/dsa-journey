// problem : insert new node at last
//  logic : create new node then fill data then traversal then declare temp->next = new node
//  date : day 7

#include <iostream>
using namespace std;

class node
{

public:
    int data;
    node *next;
};

int main()
{

    node *first = new node();
    node *second = new node();
    node *third = new node();

    first->data = 10;
    second->data = 20;
    third->data = 30;

    first->next = second;
    second->next = third;
    third->next = NULL;

    node *newNode = new node();
    newNode->data = 40;
    newNode->next = NULL;

    node *temp = first;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;

    temp = first;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}