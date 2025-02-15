#include <iostream>
#include <climits>
#include <queue>
using namespace std;
class Node
{ // This is a tree node
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

int levels(Node *root)
{
    if (root == NULL)
        return 0;
    return 1 + max(levels(root->left), levels(root->right));
}

// level order traversal from left to right
void nthLevel(Node *root, int curr, int level)
{
    if (root == NULL)
        return; // base case
    if (level == curr)
    {
        cout << root->val << " "; // work
        return;
    }
    nthLevel(root->left, curr + 1, level);  // call 1
    nthLevel(root->right, curr + 1, level); // call 2
}

void levelOrder(Node *root)
{ // from left to right
    int n = levels(root);
    for (int i = 1; i <= n; i++)
    {
        nthLevel(root, 1, i);
        cout<<endl;
    }
}

void nthLevelRev(Node *root, int curr, int level)
{
    if (root == NULL)
        return; // base case
    if (level == curr)
    {
        cout << root->val << " "; // work
        return;
    }
    nthLevelRev(root->right, curr + 1, level); // call 2
    nthLevelRev(root->left, curr + 1, level);  // call 1
}

void leverOrderRev(Node *root)
{
    int n = levels(root);
    for (int i = 1; i <= n; i++)
    {
        nthLevelRev(root, 1, i);
        cout<<endl;
    }
}

// Using Queue
void levelOrderQueue(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (q.size() > 0)
    {
        Node *temp = q.front();
        q.pop();
        cout << temp->val << " ";
        if (temp->left != NULL)
            q.push(temp->left);
        if (temp->right != NULL)
            q.push(temp->right);
    }
    cout << endl;
}

int main()
{
    Node *a = new Node(1); // root node
    Node *b = new Node(2);
    Node *c = new Node(3);
    Node *d = new Node(4);
    Node *e = new Node(5);
    Node *f = new Node(6);
    Node *g = new Node(7);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    // nthLevel(a,1,2);
    cout << endl;
    levelOrder(a);
    cout << endl;
    // leverOrderRev(a);
    levelOrderQueue(a);
}