//Leetcode-658
#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;

//typedef pair<int,int> pi;

void display(vector<int>& ans) {
    for(int i=0;i<ans.size();i++) {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
vector<int> kClosest(vector<int>& arr, int k, int x) {
    int n = arr.size();
    priority_queue<pair<int,int>> pq;
    for(int i=0;i<n;i++) {
        int dist = abs(arr[i] - x);
        int ele = arr[i];
        pair<int,int> p = {dist,ele};//pair bnaya
        pq.push(p);//pair push kr dia
        if(pq.size()>k) pq.pop();
    }
    vector<int> ans;
    while(pq.size()>0){
        int ele = pq.top().second;
        ans.push_back(ele);
        pq.pop();
    }
    sort(ans.begin(),ans.end());
    return ans;
}
int main() {
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(7);
    arr.push_back(8);
    int k = 4, x = 4;
    vector<int> ans = kClosest(arr, k, x);
    display(ans);
    
}