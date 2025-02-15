//Leetcode-138(IMP coding round question)
#include<iostream>
#include<unordered_map>
using namespace std;

class Node{ //This is a tree node
    public:
    int val;
    Node* next;
    Node* random;
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->random = NULL;
    }
};
Node* copyRandomList(Node* head) {
    //step-1 -> Create the deep copy without random pointer
    Node* dummy = new Node(0);
    Node* tempC = dummy;
    Node* temp = head;
    while(temp) {
        Node* a = new Node(temp->val);
        tempC->next = a;
        tempC = tempC->next;
        temp = temp->next;
    }
    Node* b = dummy->next;
    Node* a = head;
    //step-2 : Make a map of <original, duplicate>
    unordered_map<Node*, Node*> m;
    Node* tempa = a;
    Node* tempb = b;
    while(tempa!=NULL) {
        m[tempa] = tempb;
        tempa = tempa->next;
        tempb = tempb->next;
    }
    for(auto x : m) {
        Node* o = x.first;
        Node* d = x.second;
        if(o->random!=NULL) {
            Node* oRandom = o->random;
            Node* dRandom = m[o->random];
            d->random = dRandom;
        }
    }
    return b;
}
int main() {

}