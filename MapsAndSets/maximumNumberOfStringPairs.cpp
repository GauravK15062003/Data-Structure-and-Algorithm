// Leetcode-2744
#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>
using namespace std;

int maximumNumberOfStrings(vector<string> &arr)
{
    int n = arr.size();
    // Method-1: Simple approach  (TC-O(n2))

    // int count = 0;
    // for(int i=0;i<n-1;i++){
    //     string rev = arr[i];
    //     reverse(rev.begin(), rev.end());
    //     for(int j=i+1;j<n;j++){
    //         if(rev==arr[j]) count++;
    //     }
    // }
    // return count;

    // Method-2: Using Sets TC-O(n)

    // int count = 0;
    // unordered_set<string> s;
    // for (int i = 0; i < n; i++)//O(n)
    // {
    //     s.insert(arr[i]);
    // }
    // for (int i = 0; i < n; i++) //O(n)
    // {
    //     string rev = arr[i];
    //     reverse(rev.begin(), rev.end());
    //     if (rev == arr[i])
    //         continue;
    //     if (s.find(rev) != s.end())  //searching is even O(1)
    //     {
    //         count++;
    //         s.erase(arr[i]);
    //     }
    // }
    // return count;

    //Method-3
    int count = 0;
    unordered_set<string> s;
    for(int i=0;i<n;i++){
        string rev = arr[i];
        reverse(rev.begin(), rev.end());
        if(s.find(rev) != s.end()) count++;
        else s.insert(arr[i]);
    }
    return count;
}
int main()
{
    vector<string> arr;
    arr.push_back("cd");
    arr.push_back("ac");
    arr.push_back("dc");
    arr.push_back("ca");
    arr.push_back("zz");
    arr.push_back("sb");
    arr.push_back("bs");
    arr.push_back("xy");
    arr.push_back("gh");
    int ans = maximumNumberOfStrings(arr);
    cout << ans;
}