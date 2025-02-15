#include<iostream>
#include<queue>
#include<vector>
using namespace std;

void display(vector<int>& arr) {
    for(int i=0;i<arr.size();i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

vector<int> kSortedArray(int arr[], int n, int k) {
    priority_queue<int, vector<int>, greater<int>> pq;//minHeap
    vector<int> ans;
    for(int i=0;i<n;i++) {
        pq.push(arr[i]);
        if(pq.size()>k) {
            ans.push_back(pq.top());
            pq.pop();
        }
    }
    //push the remaining element into the ans till pqueue become empty
    while(pq.size()>0) {
        ans.push_back(pq.top());
        pq.pop();
    }
    return ans;
}

int main() {
    int arr[] = {10,9,8,7,4,70,60,50};
    int k = 4;
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> ans = kSortedArray(arr, n, k);
    display(ans);
    
}