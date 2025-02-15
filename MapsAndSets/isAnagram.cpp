//Leetcode-242
#include<iostream>
#include<unordered_map>
using namespace std;

bool isAnagram(string s, string t){
    //Method-1: Using 2 Map
    // if(s.length()!=t.length()) return false;
    // unordered_map<char, int> map1;//for s
    // unordered_map<char, int> map2;//for t
    // for(int i=0;i<s.length();i++){
    //     map1[s[i]]++;
    // }
    //  for(int i=0;i<t.length();i++){
    //     map2[t[i]]++;
    // }
    // for(auto x : map1) {
    //     char ch1 = x.first;
    //     int freq1 = x.second;
    //     if(map2.find(ch1)!=map2.end()) {
    //         int freq2 = map2[ch1];
    //         if(freq1!=freq2) return false;
    //     }
    //     else return false;
    // }
    // return true;

    //Method-2: Using 1 Map
    if(s.length()!=t.length()) return false;
    unordered_map<char, int> map;
    for(int i=0;i<s.length();i++) {
        map[s[i]]++;
    }
    for(int i=0;i<t.length();i++){
        char ch = t[i];
        if(map.find(ch)!=map.end()) {
            map[ch]--;
            if(map[ch]==0) map.erase(ch);
        }
        else return false;
    }
    if(map.size()!=0) return false;
    else return true;
}
int main(){
    string s = "anagram";
    string t = "nagaram";
    bool ans = isAnagram(s, t);
    cout<<ans;
}