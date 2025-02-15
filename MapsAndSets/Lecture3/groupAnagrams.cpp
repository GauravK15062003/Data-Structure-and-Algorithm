//Leetcode-49
#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& arr) {
    vector<vector<string>> ans;
    unordered_map<string, vector<string>> mp;
    for(string str : arr) {
        string lexo = str;
        sort(lexo.begin(), lexo.end()); 
        if(mp.find(lexo)==mp.end()) {//map m lexo nhi mila
            vector<string> v;
            v.push_back(str);
            mp[lexo] = v;
        }
        else {//map m lexo present h
            mp[lexo].push_back(str);
        }
    }
    for(auto x : mp) {
        vector<string> v = x.second;
        ans.push_back(v);
    }
    return ans;
}

int main() {
    vector<string> arr;
    arr.push_back("eat");
    arr.push_back("tea");
    arr.push_back("tan");
    arr.push_back("nat");
    arr.push_back("bat");
    arr.push_back("ate");
    arr.push_back("tar");
    arr.push_back("rat");
    arr.push_back("pan");
    arr.push_back("art");
    arr.push_back("nap");
    vector<vector<string>> ans = groupAnagrams(arr);
    for(int i=0;i<ans.size();i++) {
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}