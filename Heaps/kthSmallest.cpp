#include<iostream>
#include<queue>
using namespace std;

int kthSmallest(int arr[], int k, int n) {
    priority_queue<int> pq;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>k) pq.pop();
    }
    return pq.top();
}

int main() {
    int arr[] = {10, 20, -4, 6, 18, 24, 105, 118};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans = kthSmallest(arr, 3, n);
    cout<<ans;
}