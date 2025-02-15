//Leetcode-1814(Count Nice Pairs in an Array)
#include<iostream>
#include<unordered_set>
#include<unordered_map>
using namespace std;

int rev(int n) {
    int r = 0;
    while(n>0) {
        r *= 10;
        r += n%10;
        n /= 10
    }
    return n;
}

// int fact(int n) {
//     int f = 1;
//     for(int i=2;i<=n;i++) {
//         f *= i;
//     }
//     return f;
// }
// int combi(int n, int r) {
//     return fact(n)/(fact(r)*fact(n-r));
// }

int countNicePairs(vector<int>& nums) {
    int n = nums.size();
    int count = 0;
    unordered_map<int, int> m;
    //first transformm the array
    for(int i=0;i<n;i++) {
        nums[i] -= rev(nums[i]);
    }

    //put in the map
    for(int i=0;i<n;i++) {
        // m[nums[i]]++;
        if(m.find(nums[i])!=m.end()) {
            count = count%1000000007;
            count += m[nums[i]]; //count me map ke nums[i] ke frequency ko add krna h
            m[nums[i]];
        }
        else m[nums[i]];
    }


    // for(auto x : m) {
    //     int f = x.second;
    //     // count += combi(f, 2);
    // }
    return count%1000000007;
}