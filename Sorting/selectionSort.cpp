#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {5,3,10,4,30};
    int n = 5;
    for(int ele : arr){
        cout<<ele<<" ";
    }
    cout<<endl;

    // Selection Sort
    for(int i=0; i<n-1; i++){
        int min = INT_MAX;
        int mindx = i;
        // minimum element calculation
        for(int j=i; j<n; j++){
            if(arr[j]<arr[mindx]){
               min = arr[j];
                mindx = j;
            }
        }
        swap(arr[i],arr[mindx]);
    }
     for(int ele : arr){
        cout<<ele<<" ";
    }
}