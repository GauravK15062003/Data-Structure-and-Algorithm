//Leetcode-1657
#include<iostream>
#include<unordered_map>
using namespace std;

bool closeStrings(string str1, string str2) {
    if(str1.length()!=str2.length()) return false;
    unordered_map<char, int> mp1, mp2;
    // for(char ch : str1) {
    //     mp1[ch]++;
    // }
    // for(char ch : str2) {
    //     mp2[ch]++;
    // }
    for(int i=0;i<str1.length();i++) {
        mp1[str1[i]]++;
        mp2[str2[i]]++;
    }

    //comparing map1 and map2 but only characters
    for(auto x : mp1) {
        char ch = x.first;
        if(mp2.find(ch)==mp2.end()) return false;
    }
    unordered_map<int,int> h1,h2; 
    for(auto x : mp1) {
        int freq = x.second;
        h1[freq]++;
    }
    for(auto x : mp2) {
        int freq = x.second;
        h2[freq]++;
    }

    //comparing helper1 map and helper2 map
    for(auto x : h1) {
        int key = x.first;
        if(h2.find(key)==h2.end()) return false;
        if(h1[key]!=h2[key]) return false;
    }
    return true;
}


int main(){
    string str1 = "cabbba";
    string str2 = "abbccc";
    bool ans = closeStrings(str1,str2);
    cout<<ans;
}