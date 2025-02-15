#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class DLL
{ // User defined data structure
public:
    Node *head;
    Node *tail;
    int size;
    DLL()
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
            temp->prev = tail;
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
            head->prev = temp;
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
            for (int i = 1; i <= idx - 1; i++)
            {
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            t->prev = temp;
            t->next->prev = t;
            size++;
        }
    }
    void deleteAtHead()
    {
        if (size == 0)
            cout << "List is Empty..";
        else if (size >= 1)
        {
            head = head->next;
            if (head)
                head->prev = NULL;
            if (head == NULL)
                tail = NULL;
            size--;
        }
    }
    void deleteAtTail()
    {
        if (size == 0)
            cout << "List is Empty..";
        else if (size == 1)
        {
            deleteAtHead();
            return;
        }

        tail->prev->next = NULL;
        tail = tail->prev;
        size--;
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
            for (int i = 1; i <= idx - 1; i++)
            {
                temp = temp->next;
            }
            temp->next = temp->next->next;
            temp->next->prev = temp;
            size--;
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
            if (idx < size / 2)
            {
                Node *temp = head;
                for (int i = 1; i <= idx; i++)
                {
                    temp = temp->next;
                }
                return temp->val;
            }
            else{ // idx>size/2
                Node *temp = tail;
                for (int i = 1; i < size-idx; i++)
                {
                    temp = temp->prev;
                }
                return temp->val;
            }
        }
    }
};
int main()
{
    DLL list;
    list.insertAtTail(10); // 10
    //list.display();
    ////cout << list.size << endl;
    list.insertAtTail(20); // 10 20
    //list.display();
    //cout << list.size << endl;
    list.insertAtTail(30); // 10 20 30
    //list.display();
    //cout << list.size << endl;
    list.insertAtTail(40); // 10 20 30 40
    //list.display();
    //cout << list.size << endl;
    list.insertAtHead(80); // 80 10 20 30 40
    //list.display();
    //cout << list.size << endl;
    list.insertAtIdx(2, 60); // 80 10 60 20 30 40
    //list.display();
    //cout << list.size << endl;
    list.deleteAtTail(); // 80 10 60 20 30
    //list.display();
    //cout << list.size << endl;
    list.deleteAtHead(); // 10 60 20 30
    //list.display();
    //cout << list.size << endl;
    list.deleteAtIdx(2); // 10 60 30
    //list.display();
    //cout << list.size << endl;
    list.insertAtTail(50);
    list.insertAtTail(70);
    list.insertAtTail(20);
    list.display();
    cout<<list.getAtIdx(0);
}