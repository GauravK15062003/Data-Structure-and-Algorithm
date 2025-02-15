#include<iostream>
#include<climits>
using namespace std;
class Node{ //This is a tree node
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void displayTree(Node* root){
    if(root == NULL) return;
    cout<<root->val<<" ";
    displayTree(root->left);
    displayTree(root->right);
}

int size(Node* root){
    if(root == NULL) return 0;
    return 1 + size(root->left) + size(root->right);
}

int sum(Node* root){
    if(root == NULL) return 0;
    return root->val + sum(root->left) + sum(root->right);
}

int product(Node* root){
    if(root==NULL) return 1;
    return (root->val)*product(root->left)*product(root->right);
}

int maxInTree(Node* root){
    if(root==NULL) return INT_MIN;
    int lMax = maxInTree(root->left);
    int rMax = maxInTree(root->right);
    return max(root->val, max(lMax, rMax));
}

int minInTree(Node* root){
    if(root==NULL) return INT_MAX;
    int lMin = minInTree(root->left);
    int rMin = minInTree(root->right);
    return min(root->val, min(lMin, rMin));
}

int levels(Node* root){
    if(root==NULL) return 0;
    return 1 + max(levels(root->left), levels(root->right));
}

int main(){
    Node* a = new Node(1);//root node
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    displayTree(a);
    cout<<endl;
    cout<<"Sum of values in Tree:"<<sum(a)<<endl;
    cout<<"Product of values in Tree:"<<product(a)<<endl;
    cout<<"Size of Tree(No. of Node):"<<size(a)<<endl;
    cout<<"Maximum value in Tree:"<<maxInTree(a)<<endl;
    cout<<"Minimum value in Tree:"<<minInTree(a)<<endl;
    cout<<"Levels in Tree:"<<levels(a)<<endl;
    cout<<"Height of Tree : "<<levels(a)-1<<endl;

}