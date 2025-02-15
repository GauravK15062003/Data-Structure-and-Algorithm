#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

bool canArrange(vector<int>& arr, int k) {
    unordered_map<int,int> mp;
    for(int ele : arr) {
        ele = ((ele % k)+k)%k;
        mp[ele]++;
    }
    if(mp.find(0)!=mp.end()){
        if(mp[0]%2!=0) return false;
        mp.erase(0);
    }
  
    for(auto x : mp) {
        int ele = x.first;
        int rem = k - ele;
        if(mp.find(rem)==mp.end()) return false;
        if(mp[ele]!=mp[rem]) return false;
    }
    return true;
}
int main() {
    vector<int> arr;
    arr.push_back(-1);
    arr.push_back(1);
    arr.push_back(-2);
    arr.push_back(2);
    arr.push_back(-3);
    arr.push_back(3);
    arr.push_back(-4);
    arr.push_back(4);
    bool ans = canArrange(arr,3);
    cout<<ans;
}