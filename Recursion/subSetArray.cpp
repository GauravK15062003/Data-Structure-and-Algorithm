#include <iostream>
#include <vector>

using namespace std;

void printSubset(int arr[], int n, int idx, vector<int> ans){
    if(idx==n){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return;
    }
    printSubset(arr,n,idx+1,ans);
    ans.push_back(arr[idx]);
    printSubset(arr,n,idx+1,ans);
}

int main()
{
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> v;
    printSubset(arr,n,0,v);
}

//Leetcode - 78
//  void helper(vector<int>& nums, vector<int> ans, vector<vector<int>>& finalAns, int idx){
//         if(idx==nums.size()){
//             finalAns.push_back(ans);
//             return;
//         }
//         helper(nums,ans,finalAns,idx+1);
//         ans.push_back(nums[idx]);
//         helper(nums,ans,finalAns,idx+1);
//     }
//     vector<vector<int>> subsets(vector<int>& nums) {
//         vector<int> ans;
//         vector< vector<int> > finalAns;
//         helper(nums,ans,finalAns,0);
//         return finalAns;
//     }