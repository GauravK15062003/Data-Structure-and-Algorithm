#include<iostream>
#include<queue>
using namespace std;

int main() {
    // priority_queue<int> pq;//by default maxHeap
    // pq.push(10);
    // pq.push(2);
    // pq.push(-6);
    // pq.push(8);
    // pq.push(81);
    // cout<<pq.top()<<endl;//81
    // pq.pop();//81 is removed
    // cout<<pq.top()<<endl;//10

    //minHeap
    priority_queue<int,vector<int>,greater<int>> pq;
    pq.push(10);
    pq.push(25);
    pq.push(-6);
    pq.push(81);
    cout<<pq.top()<<endl;//-6
    pq.pop();//-6 is removed
    cout<<pq.top()<<endl;//10


}