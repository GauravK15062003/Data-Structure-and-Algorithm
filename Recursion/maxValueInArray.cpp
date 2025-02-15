#include<iostream>
using namespace std;
void printMax(int arr[], int n, int idx, int max){
    if(idx==n) {
        cout<<max;
        return;
    }
    if(max<arr[idx]) max = arr[idx];
    printMax(arr,n,idx+1,max);
}
int maxInArr(int arr[], int n, int idx){
    if(idx==n) return INT8_MIN;
    return max(arr[idx], maxInArr(arr,n,idx+1));
}

int main(){
   int arr[] = {2,1,6,3,9,100,2};
   int n = sizeof(arr)/sizeof(arr[0]);
   printMax(arr,n,0,INT8_MIN);
   cout<<endl;
   cout<<maxInArr(arr,n,0);
   
}