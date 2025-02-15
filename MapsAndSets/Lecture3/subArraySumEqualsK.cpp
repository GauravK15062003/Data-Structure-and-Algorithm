//Leetcode-560
#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
using namespace std;

int subarraySum(vector<int>& arr, int k) {

    //Method-1: Using set for all positive unique numbers
    // int n = arr.size();
    // vector<int> pre(n, 0);
    // pre[0] = arr[0];
    // int n = arr.size();
    // for(int i=0;i<n;i++) {
    //     pre[i] = arr[i] + pr[i-1];
    // }
    // unordered_set<int> s;
    // int count = 0;
    // for(int i=0;i<n;i++) {
    //     if(pre[i]==k) count++;
    //     int rem = pre[i] - k;
    //     if(s.find(rem)!=s.end()) count++;
    //     s.insert(pre[i]);
    // }
    // return count;

    //Metho-2: Using map
    int n = arr.size();
    vector<int> pre(n, 0);
    pre[0] = arr[0];
    int n = arr.size();
    for(int i=0;i<n;i++) {
        pre[i] = arr[i] + pr[i-1];
    }
    unordered_map<int, int> mp;
    int count = 0;
    for(int i=0;i<n;i++) {
        if(pre[i]==k) count++;
        int rem = pre[i] - k;
        if(mp.find(rem)!=mp.end()) count += mp[rem];
        mp[pre[i]]++;
    }
    return count;
}
int main() {

}