#include <iostream>
#include<vector>
using namespace std;

class Queue{
public:
    int f;
    int b;
    int s;
    vector<int> arr;
    Queue(int val){
        f = 0;
        b = 0;
        s = 0;
        vector<int> v(val);
        arr = v; //make the copy 
    }
    void push(int val){
        if(b == arr.size()){
            cout<<"Queue is FULL!"<<endl;
            return;
        }
        arr[b] = val;
        b++;
        s++;
    }
    void pop(){
        if(s==0) {
            cout<<"Queue is EMPTY!"<<endl;
            return;
        }
        f++;
        s--;
    }
    int front(){
        if(s==0) {
            cout<<"Queue is EMPTY!"<<endl;
            return -1;
        }
        return arr[f];
    }
    int back(){
        if(s==0) {
            cout<<"Queue is EMPTY!"<<endl;
            return -1;
        }
        return arr[b-1];

    }
    int size(){
        return s;
    }
    bool empty(){
        if(s==0) return true;
        else return false;
    }
    void display(){
        for(int i=f;i<b;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main() {
    Queue q(5); // Give the size of array or vector
    // push, pop, front, back, size, empty
    q.push(10); // 10
    q.push(20); // 10 20
    q.push(30); // 10 20 30
    q.push(40); // 10 20 30 40
    q.display(); // 10 20 30 40
    q.push(50); // 10 20 30 40 50
    q.push(60);  // Queue is FULL!
    q.display(); // 10 20 30 40 50
    q.pop();
    q.display(); // 20 30 40 50

    
}