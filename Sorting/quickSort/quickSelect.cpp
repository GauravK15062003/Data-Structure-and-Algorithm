#include<iostream>
using namespace std;

int partition(int arr[], int si, int ei){
    int pivot = arr[(si+ei)/2];
    int count = 0;
    for(int i=si;i<=ei;i++){
        if(i==(si+ei)/2) continue;
        if(arr[i]<=pivot) count++;
    }
    int pi = si + count;
    swap(arr[(si+ei)/2], arr[pi]);
    int i = si;
    int j = ei;
    while(i<pi && j>pi){
        if(arr[i]<=pivot) i++;
        if(arr[j]>pivot) j--;
        else if(arr[i]>pivot && arr[j]<=pivot){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return pi;
}
int kthSmallest(int arr[], int si, int ei, int k){
    int pi = partition(arr, si, ei);
    if(pi+1==k) return arr[pi];
    else if(pi+1 < k) return kthSmallest(arr, pi+1, ei, k);
    else return kthSmallest(arr, si, pi-1, k);
    
}
int main(){
    // int arr[] = {5,1,8,2,7,6,3,4,-8};//-8 1 2 3 4 5 6 7 8
    int arr[] = {3,2,1,5,6,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int x = 2;
    int k = n - x + 1;
    cout<<endl;
    cout<<kthSmallest(arr, 0, n-1, k);
   
   
}