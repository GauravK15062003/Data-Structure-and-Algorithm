#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void sort01(vector<int>& v){
    int n = v.size();
    int noz = 0;
    int noo = 0;
    for(int i=0; i<n; i++){
        if(v[i]==0) noz++;
        else noo++;
    }

    for(int i=0; i<n; i++){
        if(i<noz) v[i] = 0;
        else v[i] = 1;
    }
}
void twoPointerSort(vector<int>& v){
    int i = 0;
    int j = v.size()-1;
    while(i<j){
        if(v[i]==1 && v[j]==0){
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
        if(v[i]==0) i++;
        if(v[j]==1) j--;
        //if(i>j) break;
        
    }
}
int main(){
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);

    cout<<"Original Array : ";
    display(v);
    
    //sort01(v);
    twoPointerSort(v);
    cout<<"Sorted Array : ";
    display(v);
    
}