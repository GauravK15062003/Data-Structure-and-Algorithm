#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>& v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}


// One pass solution(Dutch flag solution)
void sortArr2(vector<int>& v){
    int lo = 0;
    int mid = 0;
    int hi = v.size()-1;
    
        while(mid<=hi){
        if(v[mid]==2){
           // swap(&v[hi], &v[mid]);
           int temp = v[hi];
           v[hi] = v[mid];
           v[mid] = temp;
            hi--;
        }
        else if(v[mid]==0){
           int temp = v[lo];
           v[lo] = v[mid];
           v[mid] = temp;
            lo++;
            mid++;
        }
        else{
            mid++;
        }

    }
}
void sortArr(vector<int>& v){
    int n = v.size();
    int noz = 0;
    int noo = 0;
    int notw = 0;

    for(int i=0; i<n; i++){
        if(v[i]==0) noz++;
        else if(v[i]==1) noo++;
        else notw++;
    }

    //fill
    for(int i=0; i<n; i++){
        if(i<noz) v[i] = 0;
        else if(i<(noz+noo)) v[i] = 1;
        else v[i] = 2;
    }
    return;

}
int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    display(v);
    //sortArr(v);
    sortArr2(v);
    display(v);

}