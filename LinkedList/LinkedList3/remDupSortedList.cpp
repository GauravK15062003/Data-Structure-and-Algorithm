#include<iostream>
using namespace std;
class ListNode{
    public:
    int val;
    ListNode* next;
    ListNode(int val){
        this->val = val;
        this->next = next;
    }
};
ListNode* deleteDuplicates(ListNode* head){
    if(head==NULL || head->next == NULL) return head;
    ListNode* a = head;
    ListNode* b = head->next;
    while(b != NULL){
        while(b != NULL && a->val == b->val){ //b!=NULL since its val can't be calculated
            b = b->next;
        }
        a->next = b;
        // for next round
        a = b;
        if(b!=NULL) b = b->next;
    }
    return head;
}
void display(ListNode* head){
    ListNode* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
    }
    cout<<endl;
}

int main(){
    ListNode* head = new ListNode(10);
    ListNode* b = new ListNode(10);
    ListNode* c = new ListNode(10);
    ListNode* d = new ListNode(20);
    ListNode* e = new ListNode(20);
    ListNode* f = new ListNode(30);
    ListNode* g = new ListNode(40);
    head->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = g;
    display(head);
    ListNode* new_list = deleteDuplicates(head);
    display(head);

}
