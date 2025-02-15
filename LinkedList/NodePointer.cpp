#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout<<endl;
}
void recDisplay(Node* head){
    if(head==NULL) return;//base call
    cout<<head->val<<" ";//kaam
    recDisplay(head->next);//call
}
void displayRev(Node* head){
    if(head==NULL) return;
    displayRev(head->next);
    cout<<head->val<<" ";
    
}
int size(Node* head){
    Node* temp = head;
    int n = 0;
    while(temp!=NULL){
        n++;
        temp = temp->next;
    }
    return n;
}
void insertAtEnd(Node *head, int val){
    Node *t = new Node(val);
    Node *temp = head;
    while(temp->next!=NULL) temp = temp->next;
    temp->next = t;

}
int main()
{  
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(50);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    // display(a);
    // insertAtEnd(a,80);
    // display(a);
    cout<<size(a)<<endl;
    // recDisplay(a);
    // displayRev(a);
}