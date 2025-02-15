#include<iostream>
#include<vector>
using namespace std;

//Leetcode-1402
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


int maxSatisfaction(vector<int>& satisfaction){
    int n = satisfaction.size();
    mergeSort(satisfaction);
    int suf[n];
    suf[n-1] = satisfaction[n-1];
    for(int i=n-2;i>=0;i--){
        suf[i] = suf[i+1] + satisfaction[i];
    }
    // find the pivot idx
    int idx = -1;
    for(int i=0;i<n;i++){
        if(suf[i]>=0){
            idx = i;
            break;
        }
    }
    if(idx==-1) return 0;
    //Max sum of like-time coefficient
    int x = 1;
    int maxSum = 0;
    for(int i=idx;i<n;i++){
        maxSum += (satisfaction[i]*x);
        x++;
    }
    return maxSum;

}
int main(){
  int arr[] = {-1,-8,0,5,-9};
  int n = sizeof(arr)/sizeof(arr[0]);
  vector<int> satisfaction(arr,arr+n);
  int x = maxSatisfaction(satisfaction);
  cout<<x; // 14


}