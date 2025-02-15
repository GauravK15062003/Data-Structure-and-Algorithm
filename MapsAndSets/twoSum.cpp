//Leetcode-1
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    //Method-1:O(n2)
    // int n = nums.size();
    // vector<int> ans;
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(nums[i]+nums[j]==target) {
    //             ans.push_back(i);
    //             ans.push_back(j);
    //             return ans;
    //         }
    //     }
    // }
    // return ans;

    //Method-2:O(n)
    int n = nums.size();
    unordered_map<int, int> m;
    for(int i=0;i<n;i++) {
        int rem = target - nums[i];
        if(m.find(rem)!=m.end()) {
            ans.push_back(m[rem]);
            ans.push_back(i);
        }
        else m[nums[i]] = i;
    }
    return ans;
}
int main(){
   
}