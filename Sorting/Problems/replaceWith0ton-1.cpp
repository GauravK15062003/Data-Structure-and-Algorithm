#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int arr[] = {23,19,12,8,16};
    int n = 5;
    //vector<int> v(n,0); // 0 means not visited
    int x = 0;
    // for(int i=0;i<n;i++){
    //     int min = INT_MAX;
    //     int mindx = -1;
    //     for(int j=0;j<n;j++){
    //         if(v[j]==1) continue;
    //         else{
    //             if(min>arr[j]){
    //                 min = arr[j];
    //                 mindx = j;
    //             }
    //         }
    //     }
    //     arr[mindx] = x;
    //     v[mindx] = 1; // visited
    //     x++;
    // }
    // Without Using Extra Array Algorithm ---> Negative marking
     for(int i=0;i<n;i++){
        int min = INT_MAX;
        int mindx = -1;
        for(int j=0;j<n;j++){
            if(arr[j]<=0) continue;
            else{
                if(min>arr[j]){
                    min = arr[j];
                    mindx = j;
                }
            }
        }
        arr[mindx] = -x;
        x++;
    }
    for(int i=0;i<n;i++){
        arr[i] = -arr[i];
        cout<<arr[i]<<" ";
    }
}