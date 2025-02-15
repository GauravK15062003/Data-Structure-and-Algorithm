//Leetcode-2094
#include<iostream>
#include<unordered_set>
#include<unordered_map>
using namespace std;


vector<int> findEvenNumbers(vector<int>& arr) {

    //Method-1: Using set but it is not working of repeated element like [2,2,8,8,2]
    // int n = arr.size();
    // vector<int> ans;
    // unordered_set<int> s;
    // for(int ele : arr) {
    //     s.insert(ele);
    // }
    // for(int i=100;i<=999;i+=2) {
    //     int x = i;
    //     int a = x%10; //ones place digit
    //     x /= 10;
    //     int b = x%10; //Tens place digit
    //     x /= 10;
    //     int c = x; //Hundreds place digit
    //     if(s.find(a)!=s.end()){
    //         s.erase(a);
    //         if(s.find(b)!=s.end()) {
    //             s.erase(b);
    //             if(s.find(c)!=s.end()) ans.push_back(i);
    //             s.insert(b);
    //         }
    //         s.insert(a);
    //     }
    // }
    // return ans;

    //Method-2: Using map
    int n = arr.size();
    vector<int> ans;
    unordered_map<int, int> m;
    for(int ele : arr) {
        m[ele]++;
    }
    for(int i=100;i<=999;i+=2) {
        int x = i;
        int a = x%10; //ones place digit
        x /= 10;
        int b = x%10; //Tens place digit
        x /= 10;
        int c = x; //Hundreds place digit
        if(m.find(a)!=m.end()){
            m[a]--;//decrement of frequency of 'a'
            if(m[a]==0) m.erase(a); //if frequency of 'a' becomes 0 then erase 'a' from map
            if(m.find(b)!=m.end()) {
                m[b]--;
                if(m[b]==0) m.erase(b);
                if(m.find(c)!=m.end()) ans.push_back(i);
                m[b]++;
            }
            m[a]++;
        }
    }

}