#include<iostream>
using namespace std;

   // T.C and S.C - O(logn)
int pow(int x, int n){
    if(n==1) return x;
    int ans = pow(x, n/2);
    if(n%2==0){
    return ans*ans;
    }
    else return x*ans*ans;
}
int main(){
    cout<<pow(3,4);
}