#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& a, vector<int>& b, vector<int>& res){
    int i = 0;
    int j = 0;
    int k = 0;
    while(i<a.size() && j<b.size()){
        if(a[i]<=b[j]) res[k++] = a[i++];
        else res[k++] = b[j++];
    }

    if(i==a.size()){ // a is at end
        while(j<b.size()){
            res[k++] = b[j++];
        }
    }
    if(j==b.size()){
        while(i<a.size()){
            res[k++] = a[i++];
        }
    }
}
void mergeSort(vector<int>& v){
    int n = v.size();
    if(n==1) return ;  //base case
    int n1 = n/2,n2 = n - n/2;
    vector<int> a(n1), b(n2);
    // copy pasting
    for(int i=0;i<n1;i++){
        a[i] = v[i];
    }
    for(int i=0;i<n2;i++){
        b[i] = v[i+n1];
    }
    // recursion
    mergeSort(a);
    mergeSort(b);
    // merge
    merge(a,b,v);
    a.clear();
    b.clear();
}
vector<int> answerQueries(vector<int>& nums, vector<int>& queries){
    int n = nums.size();
    int m = queries.size();
    vector<int> ans(m);
    //sort nums
    mergeSort(nums);  //T.C=O(nlogn) S.C = O(logn)
    //make nums prefix sum //T.C = O(n)
    for(int i=1;i<n;i++){
        nums[i] += nums[i-1];
    }
    for(int i=0;i<m;i++){//T.C=O(m*n)
        int len = 0;
        // for(int j=0;j<n;j++){
        //     if(nums[j]>queries[i]) break;
        //     len++;
        // }

        //binary search //T.C = O(m*logn)
        int lo = 0;
        int hi = n-1;
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            if(nums[mid]>queries[i]) hi = mid-1;
            else{//nums[mid]<=queries[i]
                len = mid + 1;
                lo = mid + 1;

            }
        }
        ans[i] = len;
    }
    return ans;  //T.C = O(n*(logn+m)) ~= O(m*n)  new T.C = O(logn*(m+n))

}

int main(){
    int nums1[] = {4,5,2,1};
    int queries1[] = {3,10,21};
    int n = sizeof(nums1)/sizeof(nums1[0]);
    int m = sizeof(queries1)/sizeof(queries1[0]);
    vector<int> nums(nums1,nums1+n);
    vector<int> queries(queries1,queries1+m);
    vector<int> ans = answerQueries(nums,queries);
    for(int i=0;i<m;i++){
        cout<<ans[i]<<" ";
    }
}