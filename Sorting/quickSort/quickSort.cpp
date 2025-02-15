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
void quickSort(int arr[], int si, int ei){
    if(si>=ei) return;
    int pi = partition(arr, si, ei);
    quickSort(arr, si, pi-1);
    quickSort(arr, pi+1, ei);
}
int main(){
    int arr[] = {5,1,8,2,7,6,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    quickSort(arr, 0, n-1);
    cout<<endl;
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}