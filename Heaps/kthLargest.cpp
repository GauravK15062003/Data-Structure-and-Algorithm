//Leetcode-215
#include<iostream>
#include<queue>
using namespace std;

int kthLargest(int arr[], int k, int n) {
    priority_queue<int, vector<int>,greater<int>> pq;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>k) pq.pop();
    }
    return pq.top();
}

int main() {
    int arr[] = {10, 200, -4, 6, 18, 24, 105, 118};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans = kthLargest(arr, 3, n);
    cout<<ans;
}