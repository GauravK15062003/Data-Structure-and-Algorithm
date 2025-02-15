//Leetcode-973
#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;

//typedef pair<int,int> pi;

void display(vector<vector<int>>& ans) {
    for(int i=0;i<ans.size();i++) {
        for(int j=0;j<2;j++)
        cout<<ans[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;
}
vector<vector<int>> kClosest(vector<vector<int>>& arr, int k) {
    int n = arr.size();
    priority_queue<pair<int,vector<int>>> pq;
    for(vector<int> v : arr) {
        int x = v[0], y = v[1];
        int dist = x*x + y*y;
        pair<int,vector<int>> p = {dist,v};//pair bnaya
        pq.push(p);//pair push kr dia
        if(pq.size()>k) pq.pop();
    }
    vector<vector<int>> ans;
    while(pq.size()>0){
        vector<int> ele = pq.top().second;
        ans.push_back(ele);
        pq.pop();
    }
    return ans;
}
int main() {
    vector<vector<int>> arr;
    for(int i=0;i<3;i++){
        vector<int> v;
        for(int i=0;i<2;i++){
            int n;
            cin>>n;
            v.push_back(n);
        }
        arr.push_back(v);
    }
    int k = 2;
    vector<vector<int>> ans = kClosest(arr, k);
    display(ans);
    
}