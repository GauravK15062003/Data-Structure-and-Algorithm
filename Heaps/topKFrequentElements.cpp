//Leetcode-347
#include<iostream>
#include<queue>
#include<vector>
#include<unordered_map>
using namespace std;

void display(vector<int>& ans) {
    for(int i=0;i<ans.size();i++) {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
vector<int> topKFrequent(vector<int>& arr, int k) {
    //map pair is <ele,freq>
    unordered_map<int,int> mp;
    for(int ele : arr) {
        mp[ele]++;
    }
    //heap pair is <freq,ele>
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    for(auto x : mp){
        int ele = x.first, freq = x.second;
        pair<int,int> p = {freq,ele};
        pq.push(p);
        //OR
        //pq.push({freq,ele});
        if(pq.size()>k) pq.pop();
    }
    vector<int> ans;
    while(pq.size()>0) {
        int ele = pq.top().second;
        ans.push_back(ele);
        pq.pop();
    }
    return ans;
}
int main() {
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(1);
    arr.push_back(1);
    arr.push_back(3);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(4);
    arr.push_back(4);
    arr.push_back(4);
    int k = 3;
    vector<int> ans = topKFrequent(arr, k);
    display(ans);
    
}