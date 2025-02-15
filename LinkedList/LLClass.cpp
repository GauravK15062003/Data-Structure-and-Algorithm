#include <bits/stdc++.h>
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
class LinkedList
{ // User defined data structure
public:
    Node *head;
    Node *tail;
    int size;
    LinkedList()
    {
        head = tail = NULL;
        size = 0;
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
    void insertAtTail(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
            head = tail = temp;
        else
        {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void insertAtHead(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
            head = tail = temp;
        else
        {
            temp->next = head;
            head = temp;
        }
        size++;
    }
    void insertAtIdx(int idx, int val)
    {
        if (idx < 0 || idx > size)
            cout << "invalid index..." << endl;
        else if (idx == 0)
            insertAtHead(val);
        else if (idx == size - 1)
            insertAtTail(val);
        else
        {
            Node *t = new Node(val);
            Node *temp = head;
            for (int i = 1; i < idx; i++)
            {
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;
        }
    }
    int getAtIdx(int idx)
    {
        if (idx < 0 || idx >= size)
        {
            cout << "Invalid Index...";
            return -1;
        }
        else if (idx == 0)
            return head->val;
        else if (idx == size - 1)
            return tail->val;
        else
        {
            Node *temp = head;
            for (int i = 1; i <= idx; i++)
            {
                temp = temp->next;
            }
            return temp->val;
        }
    }
    void deleteAtHead()
    {
        if (size == 0)
            cout << "List is Empty..";
        else if (size >= 1)
        {
            head = head->next;
            size--;
        }
    }
    void deleteAtTail()
    {
        if (size == 0)
            cout << "List is Empty..";
        else if (size >= 1)
        {
            Node *temp = head;
            while (temp->next != tail)
            {
                temp = temp->next;
            }
            temp->next = NULL;
            tail = temp;
            size--;
        }
    }
    void deleteAtIdx(int idx)
    {
        if (idx < 0 || idx >= size)
            cout << "Invalid Index..";
        else if (size == 0)
            cout << "List is Empty";
        else if (idx == 0)
            deleteAtHead();
        else if (idx == size - 1)
            deleteAtTail();
        else
        {
            Node *temp = head;
            for (int i = 1; i < idx; i++)
            {
                temp = temp->next;
            }
            temp->next = temp->next->next;
            size--;
        }
    }
};

int main()
{
    LinkedList ll;       //{}
    ll.insertAtTail(10); // {10->NULL}
    // ll.display();
    ll.insertAtTail(20); // {10->20->NULL}
    // ll.display();
    // cout << ll.size << endl;
    ll.insertAtTail(30);
    // ll.display(); // {10->20->30->NULL}
    ll.insertAtTail(40);
    // ll.display(); // {10->20->30->40->NULL}
    // cout << ll.size << endl;
    ll.insertAtHead(50);
    // ll.display(); // {50->10->20->30->40->NULL}
    // cout << ll.size << endl;
    ll.insertAtIdx(5, 60);
    // ll.display(); // {50->10->60->20->30->40->NULL}
    // cout << ll.size << endl;
    // cout << ll.getAtIdx(3) << endl; // 20
    // ll.deleteAtHead();
    // ll.display();   //10 60 20 30 40
    // cout << ll.size << endl;
    // ll.deleteAtTail();
    // ll.display();   // 10 60 20 30
    // cout << ll.size << endl;
    ll.deleteAtIdx();
    ll.display();   // 10 60 30
    // cout << ll.size << endl;
}