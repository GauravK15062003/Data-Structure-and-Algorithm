#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

Node* reverseLL(Node* head) {
    Node* temp = head;
    Node* prev = NULL;
    while(temp!=NULL) {
        Node* front = temp->next;
        temp->next = prev;
        prev = temp;
        temp = front;
    }
    return prev;
}

void print(Node* head) {
    Node* temp = head;
    while(temp) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main() {
    Node* a = new Node(1);
    Node* b = new Node(3);
    Node* c = new Node(2);
    Node* d = new Node(5);
    Node* e = new Node(6);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    print(a);
    Node* newHead = reverseLL(a);
    print(newHead);
    return 0;
}