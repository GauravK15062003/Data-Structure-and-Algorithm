#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;

void print(vector<int>& arr) {
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void heapSort(vector<int>& arr) {
    priority_queue<int> pq;
    int n = arr.size();
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
    }
    while(pq.size()>0) {
        for(int i=n-1;i>=0;i--){
            arr[i] = pq.top();
            pq.pop();
        }
    }
    
}
int main() {
    vector<int> arr;
    arr.push_back(10);
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(20);
    arr.push_back(5);
    arr.push_back(8);
    print(arr);
    heapSort(arr);
    print(arr);
}