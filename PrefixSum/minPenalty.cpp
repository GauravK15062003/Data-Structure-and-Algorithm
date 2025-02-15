#include<iostream>
#include<vector>
using namespace std;


//'Y N Y Y'
int minPenalty(string customers){
    int n = customers.size();
    vector<int> pre(n+1); // no of N before kth hour
    vector<int> suf(n+1); // no of Y after and including kth hour
    //prefix array
    pre[0] = 0;
    for(int i=0;i<=n;i++){
        // int count = 0;
        // if(customers[i]=='N') count++;
        // pre[i+1] = pre[i] + count;
        pre[i+1] = pre[i] + (customers[i]=='N') ? 1 : 0;
    }
    //suffix array
    suf[n] = 0;
    for(int i=n-1;i>=0;i--){
        // int count = 0;
        // if(customers[i]=='Y') count++;
        // suf[i] = suf[i+1] + count;
        suf[i] = suf[i+1] + (customers[i]=='Y') ? 1 : 0;
    }
    int minPen = n;
    for(int i=0;i<=n;i++){
        pre[i] += suf[i];
        int pen = pre[i];
        minPen = min(minPen,pen);
    }
    for(int i=0;i<=n;i++){
        int pen = pre[i];
        if(pen==minPen) return i;
    }
    return n;

}
int main(){
  string cust = "YYNY";
  int x = minPenalty(cust);
  cout<<x;


}