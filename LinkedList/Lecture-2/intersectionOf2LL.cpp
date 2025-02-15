#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

//T.C :- O(n1 + n2) S.C :- O(1)
Node* findIntersection(Node* firstHead, Node* secondHead) {
    if(firstHead == NULL || secondHead == NULL) return NULL;
    Node* temp1 = firstHead;
    Node* temp2 = secondHead;
    while(temp1 != temp2) {
        temp1 = temp1->next;
        temp2 = temp2->next;

        if(temp1 == temp2) return temp1;

        if(temp1 == NULL) temp1 = secondHead;
        if(temp2 == NULL) temp2 = firstHead;
    }
    return temp1;
}
int main() {
    Node* a = new Node(3);
    Node* b = new Node(1);
    Node* c = new Node(4);
    Node* d = new Node(6);
    Node* e = new Node(2);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    Node* u = new Node(1);
    Node* v = new Node(2);
    Node* w = new Node(4);
    Node* x = new Node(5);
    u->next = v;
    v->next = w;
    w->next = x;
    x->next = c;

    Node* ans = findIntersection(a,u);
    cout<<ans->val;
   
    



}