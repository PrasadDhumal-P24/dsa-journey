#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *findmiddle(node *head)
{

    node *slow = head;
    node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {

        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}
int main()
{

    node *first = new node{10, NULL};
    node *second = new node{20, NULL};
    node *third = new node{30, NULL};
    node *fourth = new node{40, NULL};
    node *fifth = new node{50, NULL};
    node *sixth = new node{60, NULL};

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;

    node *answer = findmiddle(first);

    cout << "Middle element is = " << answer->data << endl;

    return 0;
}
