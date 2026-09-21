#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *CycleStart(node *head)
{

    node *slow = head;
    node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {

        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            break;
        }
    }

    while (fast == NULL || fast->next == NULL)
    {
        return NULL;
    }
    slow = head;

    while (slow != fast)
    {
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
}

void removeCycle(node *head)
{

    node *start = CycleStart(head);

    if (start == NULL)
    {
        return;
    }

    node *temp = start;

    while (temp->next != start)
    {

        temp = temp->next;
    }
    temp->next = NULL;
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

    node *answer = CycleStart(first);

    if (answer)
    {
        cout << "Starting point found : " << answer->data << " " << endl;
    }
    else
    {
        cout << "Starting point not found " << endl;
    }

    removeCycle(first);

    node *temp = first;

    while (temp != NULL)
    {

        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}

