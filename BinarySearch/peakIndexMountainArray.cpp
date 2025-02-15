#include<iostream>
#include<vector>
#include<climits>
using namespace std;


// int peakIndexMountainArray(vector<int>& arr){
//     int n = arr.size();
//     int idx = -1;
//     for(int i=1;i<=n;i++){
//         if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
//             idx = i;
//             break;
//         }
//     }
//     return idx;
// }


int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int lo = 1;
        int hi = n-2;
        while(lo<=hi){
            int mid = lo + (hi - lo)/2;
            if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1])
            return mid;
            else if(arr[mid]>arr[mid+1]) hi = mid -1;
            else lo = mid + 1;
        }
        return 100;
    }


int main(){
    vector<int> arr = {7, 3, 1, 5, 4, 6};
    int ans = peakIndexInMountainArray(arr);
    cout<<ans;
    
}