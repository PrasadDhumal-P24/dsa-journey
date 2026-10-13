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

bool BSTsearch(node *root, int target)
{

    if (root == NULL)
    {
        return false;
    }
    if (root->data == target)
    {
        return true;
    }
    if (root->data > target)
    {
        return BSTsearch(root->left, target);
    }
    if (root->data < target)
    {
        return BSTsearch(root->right, target);
    }
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

    if (BSTsearch(root, 30))
    {

        cout << "Element found at tree" << endl;
    }
    else
    {
        cout << "Element not found at tree" << endl;
    }
    if (BSTsearch(root, 90))
    {
        cout << "Element found at tree";
    }
    else
    {
        cout << "Element not found at tree";
    }
    return 0;
}
