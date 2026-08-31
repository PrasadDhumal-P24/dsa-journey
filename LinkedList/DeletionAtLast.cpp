// problem: deletion at last
// logic: use a delete variable
// date: day 10

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

    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }

    node *last = temp->next;
    temp->next = NULL;
    delete last;

    temp = first;

    while (temp != NULL)
    {

        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}

