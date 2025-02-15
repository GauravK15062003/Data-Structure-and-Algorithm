#include<iostream>
#include<vector>
using namespace std;

int trap(vector<int>& height){
    int n = height.size();
    // prev greatest element array
    int prev[n];
    prev[0] = -1;
    int max = height[0];
    for(int i=1; i<n; i++){
        prev[i] = max;
        if(max<height[i]) max = height[i];
    }
    // next greatest element array
    // int next[n];
    // next[n-1] = -1;
    // max = height[n-1];
    // for(int i=n-2; i>=0; i--){
    //     next[i] = max;
    //     if(max<height[i]) max = height[i];
    // }
    // next greatest element array->prev as next
    prev[n-1] = -1;
    max = height[n-1];
    for(int i=n-2; i>=0; i--){
        if(max<prev[i]) prev[i] = max;
        if(max<height[i]) max = height[i];
    }
    // Minimum Array
    // int mini[n];
    // for(int i=0; i<n; i++){
    //     mini[i] = min(prev[i],next[i]);
    // }

    //Minimum Array->prev as minimum(Optimize)
    // for(int i=0; i<n; i++){
    //     prev[i] = min(prev[i],next[i]);
    // }
    // Calculating water
    int water = 0;
    for(int i=1; i<n-1; i++){
        if(height[i]<prev[i]){
            water += (prev[i]-height[i]);
        }
    }
    return water;

}
int main(){
    vector<int> height;
    int n = height.size();
    height.push_back(0);
    height.push_back(1);
    height.push_back(0);
    height.push_back(2);
    height.push_back(1);
    height.push_back(0);
    height.push_back(1);
    height.push_back(3);
    height.push_back(2);
    height.push_back(1);
    height.push_back(2);
    height.push_back(1);

    int a = trap(height);
    cout<<"Amount of water stored : "<<a;


}