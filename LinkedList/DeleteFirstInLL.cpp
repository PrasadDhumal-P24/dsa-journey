// problem: deletion at begining
// logic: use a delete variable
// date: day 9

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

    node *temp = first;
    first = first->next;
    delete temp;

    node *temp1 = first;
    while (temp1 != NULL)
    {
        cout << temp1->data << " " << endl;
        temp1 = temp1->next;
    }

    return 0;
}