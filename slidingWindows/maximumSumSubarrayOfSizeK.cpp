#include<iostream>
#include<vector>
#include<climits>
using namespace std;


int main(){
    int arr[] = {7,1,2,5,8,4,9,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    int maxSum = INT_MIN;
    int maxIdx = -1;
    int prevSum = 0;
    // for(int i=0;i<=n-k;i++){// total no ops = n-k+1
    //     int sum = 0;
    //     for(int j=i;j<i+k;j++){// k times
    //         sum += arr[j];
    //     }
    //     if(maxSum<sum){
    //         maxSum = sum;
    //         maxIdx = i;
    //     }
    // }
    //tno = (n-k+1)*k
    //Time Complexity = O(k*n)
    for(int i=0;i<k;i++){ //tno = k
        prevSum += arr[i];
    }
    maxSum = prevSum;
    int i = 1;
    int j = k;
    while(j<n){//tno = n - k
        int currSum = prevSum + arr[j] - arr[i-1];
        if(maxSum<currSum){
            maxSum = currSum;
            maxIdx = i;
        }
        prevSum = currSum;
        i++;
        j++;
    }
    //Time Complexity = O(n)
    cout<<maxSum<<endl;
    cout<<maxIdx;
}