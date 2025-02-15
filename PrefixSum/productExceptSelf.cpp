#include<iostream>
#include<vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums){
    int n = nums.size();
    vector<int> pre(n);
    vector<int> suf(n);
    vector<int> ans(n);
    // prefix product array
    int p = nums[0];
    pre[0] = 1;
    for(int i=1;i<n;i++){
        // pre[i] = p;
        // p *= nums[i];
        pre[i]=pre[i-1]*nums[i-1];
    }
    // suffix product array
    p = nums[n-1];
    suf[n-1] = 1;
    for(int i=n-2;i>=0;i--){
        // suf[i] = p;
        // p *= nums[i];
        suf[i]=suf[i+1]*nums[i+1];
    }
    // ans array
    for(int i=0;i<n;i++){
        ans[i] = pre[i]*suf[i];
    }
    return ans;
}
int main(){
   int arr[] = {1,2,3,4};
   int n = sizeof(arr)/sizeof(arr[0]);
   vector<int> nums(arr,arr+n);
   vector<int> ans = productExceptSelf(nums);
   for(int i=0;i<n;i++){
    cout<<ans[i]<<" ";
   }
}