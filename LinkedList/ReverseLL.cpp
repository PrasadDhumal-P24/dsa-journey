#include <iostream>
using namespace std;

class node
{

public:
    int data;
    node *next;
};

node *reverse(node *head)
{

    node *prev = NULL;
    node *current = head;
    node *next = current->next;

    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    return prev;
}

int main()
{

    node *first = new node();
    node *second = new node();
    node *third = new node();

    first->data = 10;
    second->data = 20;
    third->data = 40;

    first->next = second;
    second->next = third;
    third->next = NULL;

    node *newNode = reverse(first);

    node *temp = newNode;

    while (temp != NULL)
    {

        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}
