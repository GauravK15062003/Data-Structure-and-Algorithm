#include<iostream>
using namespace std;

int main(){
         int n ;
        cout<<"Enter the size of array : ";
        cin>>n;
        int arr[n];
        // input
        for(int i = 0; i<n; i++){
            cin>>arr[i];
        }
        // output
        cout<<"Entered Array : ";
        for(int i = 0; i<n; i++){
            cout<<arr[i]<<" ";
        }

        // int arr1[] = {1,2,3,4,5,5,67,8,9,1,2,12,34,55,66,77};
        // int n = sizeof(arr1)/sizeof(arr1[0]);
        // cout<<n;
        

}