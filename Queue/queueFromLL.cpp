#include <iostream>
using namespace std;

class Node
{ // User defined data type
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
class Queue
{ // User defined data structure
public:
    Node *head;
    Node *tail;
    int s;
    Queue()
    {
        head = tail = NULL;
        s = 0;
    }
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    void push(int val)
    {
        Node *temp = new Node(val);
        if (s == 0) 
            head = tail = temp;
        else
        {
            tail->next = temp;
            tail = temp;
        }
        s++;
    }
   
    void pop()
    {
        if (s == 0){
            cout << "Queue is Empty!"<<endl;
            return;
        }
        else if (s >= 1)
        {   Node* temp = head;
            head = head->next;
            s--;
            delete(temp); //no wastage of memory
        }
    }
    int front(){
        if(s==0){
            cout<<"Queue is Empty!"<<endl;
            return -1;
        }
        return head->val;
    }
    int back(){
        if(s==0){
            cout<<"Queue is Empty!"<<endl;
            return -1;
        }
        return tail->val;
    }
    int size(){
        return s;
    }
    bool empty(){
        if(s==0) return true;
        else return false;
    }
};

int main()
{
   Queue q; // Give the size of array or vector
    // push, pop, front, back, size, empty
    q.push(10); // 10
    q.push(20); // 10 20
    q.push(30); // 10 20 30
    q.push(40); // 10 20 30 40
    q.display(); // 10 20 30 40
    q.push(50); // 10 20 30 40 50
    q.push(60);  // 10 20 30 40 50 60
    q.display(); // 10 20 30 40 50 60
    q.pop();
    q.display(); // 20 30 40 50 60
    
}