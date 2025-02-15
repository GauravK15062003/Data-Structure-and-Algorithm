#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(5);
    cout<<"Input of vectors : ";
    for(int i=0;i<5;i++){
        cin>>v[i];
    }
    cout<<"Output of vectors : ";
    for(int i=0;i<5;i++){
        cout<<v[i]<<" ";
    }

    // To take input in vectors without giving size
    // vector<int> v;
    // for(int i=0;i<5;i++){
    //     int x;
    //     cin>>x;
    //     v.push_back(x);

    // }
}