#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size the of array :"<<endl;
    cin>>n;
    int arr[n];
    for(int i = 0;i<=n-1;i++){
        cin>>arr[i];
    }

    int max = INT_MIN;
    for(int i=0 ;i<=n-1; i++){
        if(max<arr[i]) max = arr[i];
    }

    int smax = INT_MIN;
    for(int i =0 ;i<=n-1;i++){
        if(arr[i]!=max && arr[i]>smax) smax = arr[i];
    }
    cout<<max<<endl;
    cout<<smax;

}