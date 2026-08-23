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

bool isMirror(node *left, node *right)
{

    if (left == NULL && right == NULL)
    {
        return true;
    }
    if (left == NULL || right == NULL)
    {
        return false;
    }
    if (left->data != right->data)
    {
        return false;
    }
    return isMirror(left->left, right->right) &&
           isMirror(left->right, right->left);
}
int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(2);

    root->left->left = new node(3);
    root->left->right = new node(4);

    root->right->left = new node(4);
    root->right->right = new node(3);

    bool answer = isMirror(root->left, root->right);

    if (answer)
    {
        cout << "symmetric tree" << endl;
    }
    else
    {
        cout << "not symmetric tree" << endl;
    }
    return 0;
}