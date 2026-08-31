#include <iostream>
using namespace std;

int queue[5];
int front = -1;
int rear = -1;

void enqueue(int value)
{

    if (rear == 4)
    {
        cout << "queue is overflow " << endl;
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        rear++;
        queue[rear] = value;
        cout << value << " <- insertrd into queue " << endl;
    }
}

void display()
{
    if (front == -1)
    {
        cout << "queue is empty " << endl;
    }
    else
    {
        cout << " queue elements" << endl;
        for (int i = front; i <= rear; i++)
        {
            cout << queue[i];
        }
        cout << endl;
    }
}

void dequeue()
{

    if (front == rear)
    {
        cout << "queue is underflow";
    }
    else
    {
        cout << " dequeue elements " << queue[front] << endl;
        front++;
    }
}

void frontoperation()
{
    if (front == -1 || front > rear)
    {
        cout << "queue is empty" << endl;
    }
    else
    {
        cout << "front element : " << queue[front] << endl;
    }
}
void rearoperation()
{
    if (front == -1 || front > rear)
    {
        cout << "queue is empty" << endl;
    }
    else
    {
        cout << "rear element : " << queue[rear] << endl;
    }
}

int main()
{

    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);

    display();

    frontoperation();

    rearoperation();

    dequeue();

    display();

    return 0;
}





