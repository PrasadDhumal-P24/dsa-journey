#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

bool hasCycle(node *head)
{

    node *slow = head;
    node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {

        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {

            return true;
        }
    }
    return false;
}
int main()
{

    node *first = new node{10, NULL};
    node *second = new node{20, NULL};
    node *third = new node{30, NULL};
    node *fourth = new node{40, NULL};
    node *fifth = new node{50, NULL};

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    fifth->next = third;

    bool answer = hasCycle(first);

    if (hasCycle)
    {

        cout << "cycle found " << endl;
    }
    else
    {
        cout << "cycle not found " << endl;
    }
    return 0;
}
