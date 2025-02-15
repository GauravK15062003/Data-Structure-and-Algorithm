//Leetcode-1207
#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
using namespace std;

bool uniqueOcurrences(vector<int>& arr) {
    //Using Map and set - TC: O(n)
    int n = arr.size();
    unordered_map<int, int> m;
    for(int i=0;i<n;i++) {
        m[arr[i]]++;
    }
    unordered_set<int> s;
    for(auto x : m) {
        int freq = x.second;
        if(s.find(freq)!=s.end()) {
            return false;
        }
        else s.insert(freq);
    }
    return true;
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(1);
    v.push_back(3);
    v.push_back(3);
    v.push_back(2);
    v.push_back(3);
    v.push_back(2);
    v.push_back(3);

    bool ans = uniqueOcurrences(v);
    cout<<ans;
   
}