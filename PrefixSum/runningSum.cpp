#include<iostream>
#include<vector>
using namespace std;

// Leetcode-1480
vector<int> runningSum(vector<int>& nums){
    int n = nums.size();
   // vector<int> run(n); 
   // run[0] = nums[0];  // since S.C = O(n)
    //T.C = O(n) & S.C = O(1)
    for(int i=1;i<n;i++){
        nums[i] += nums[i-1];
    }
    return nums;
}
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> nums(arr,arr+n);
    vector<int> ans = runningSum(nums);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}