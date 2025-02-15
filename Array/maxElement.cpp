#include<iostream>
#include<climits>
using namespace std;

int main(){
        int n;
        int sum = 0;
        cout<<"Enter the size : ";
        cin>>n;
        int arr[n];
        cout<<"Enter the elements : ";
        for(int i = 0; i<n; i++){
            cin>>arr[i];
        }
        cout<<"Array : ";
        for(int i = 0; i<n; i++){
            cout<<arr[i]<<" ";
        } 
        int max = arr[0];  //max = INT_MIN (#include<climits>)
        int secMax = INT_MIN;
        for(int i = 0;i<n;i++){
            if(max<arr[i]){
                max = arr[i];
            }
        }
        cout<<"\nMaximum Element is "<<max;
        
        for(int i = 0;i<n;i++){
            if(arr[i]!=max && secMax<arr[i]){
                secMax = arr[i];
            }
        }
        cout<<"\nSecond Maximum Element is "<<secMax;


}