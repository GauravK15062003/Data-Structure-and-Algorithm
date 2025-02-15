#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(5);
    vector<int> v(5,2); // initial size = 5, each element is initilized with 2
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<v[4]; // elements are initially initialized with 0
}