#include <iostream>
using namespace std;

class node
{

public:
    int data;
    node *left;
    node *right;

    node(int value)
    {

        data = value;
        left = NULL;
        right = NULL;
    }
};

int findmin(node *root)
{

    if (root == NULL)
    {
        return -1;
    }

    node *temp = root;

    while (temp->left != NULL)
    {

        temp = temp->left;
    }
    return temp->data;
}

int findmax(node *root)
{

    if (root == NULL)
    {
        return -1;
    }

    node *temp = root;

    while (temp->right != NULL)
    {

        temp = temp->right;
    }
    return temp->data;
}

int main()
{

    node *root = new node(50);
    root->left = new node(30);
    root->right = new node(70);

    root->left->left = new node(20);
    root->left->right = new node(40);

    root->right->left = new node(60);
    root->left->right = new node(80);

    cout << findmin(root) << endl;
    cout << findmax(root) << endl;

    return 0;
}
