#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {1, 2, 4, 5, 9, 15, 18, 21, 24};
    int n = 9;
    int x = 18;

    int lo = 0;
    int hi = n-1;
    bool flag = false;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid] == x){
            flag = true;
            cout<<arr[mid-1];
            break;
        }
        else if(arr[mid] < x) lo = mid + 1;
        else hi = mid - 1;
    }
    if(flag==false) cout<<"Lower bound element is : "<<arr[hi];
    // int p = lower_bound(arr.begin(), arr.end(), x);
}