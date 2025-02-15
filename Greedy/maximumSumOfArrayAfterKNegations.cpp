//Leetcode-1005
#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int largestSumAfterKNegations(vector<int>& nums, int k) {//O(klogn + n)
    priority_queue<int, vector<int>, greater<int>> pq(nums.begin(), nums.end());//O(n)
    int sum = 0;
    for(int i=0;i<nums.size();i++) sum += nums[i];//O(n)
    while(k--){//O(klogn)
        int ele = pq.top();//min element
        if(ele == 0) break;
        pq.pop();
        sum -= ele;
        pq.push(-1*ele);
        sum += (-1*ele);
    }
    return sum;
}
int main() {
    vector<int> nums;
    nums.push_back(4);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(10);
    nums.push_back(-3);
    int k = 2;
    int ans = largestSumAfterKNegations(nums, k);
    cout<<ans;
}