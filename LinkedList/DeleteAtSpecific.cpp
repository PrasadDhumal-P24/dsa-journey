// problem: deletion at specific position
// logic: use a delete variable
// date: day 11

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
    node *fourth = new node();
    node *fifth = new node();

    first->data = 10;
    second->data = 20;
    third->data = 30;
    fourth->data = 40;
    fifth->data = 50;

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = NULL;

    node *temp = first;

    int position = 4;

    for (int i = 1; i < position - 1; i++)
    {

        temp = temp->next;
    }
    node *deletenode = temp->next;
    temp->next = deletenode->next;
    delete deletenode;

    temp = first;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}