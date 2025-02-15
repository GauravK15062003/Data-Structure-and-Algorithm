#include<iostream>
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
        for(int i = 0;i<n;i++){
            sum += arr[i];
        }
        cout<<"\nSum of Elements : "<<sum;

        

}