#include <iostream>
using namespace std;

int stack[5];
int top = -1;

void push(int value)
{

    if (top == 4)
    {
        cout << "stack is overflow " << endl;
    }
    else
    {
        top++;
        stack[top] = value;
        cout << value << " insert into stack " << endl;
    }
}

void display()
{

    if (top == -1)
    {

        cout << " stack is empty " << endl;
    }
    else
    {
        cout << " stack elements : ";
        for (int i = top; i >= 0; i--)
        {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}
void pop()
{

    if (top == -1)
    {
        cout << "stack is underflow " << endl;
    }
    else
    {
        cout << " pop element " << stack[top] << endl;
        top--;
    }
}

int main()
{

    push(10);
    push(20);
    push(30);
    push(40);
    push(50);

    display();

    pop();

    display();

    return 0;
}
