//Leetcode-1046
#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int lastStoneWeight(vector<int>& arr) {
    priority_queue<int> pq;
    for(int ele : arr) {
        pq.push(ele);
    }
    while(pq.size()>1) {
        int x = pq.top();
        pq.pop();
        int y = pq.top();
        pq.pop();
        if(x!=y) pq.push(x-y);
    }
    if(pq.size()==1) return pq.top();
    else return 0;
}
int main() {
    vector<int> arr;
    arr.push_back(2);
    arr.push_back(5);
    arr.push_back(4);
    arr.push_back(3);
    arr.push_back(10);
    arr.push_back(1);
    int ans = lastStoneWeight(arr);
    cout<<ans;
}