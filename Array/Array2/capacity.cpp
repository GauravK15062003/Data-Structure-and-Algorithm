#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(6); // 1 1
    v.push_back(9); // 2 2
    v.push_back(5); // 3 4
    v.push_back(4); // 4 4
    v.push_back(3); // 5 8
    v.push_back(1); // 6 8
    v.push_back(7); // 7 8
    v.push_back(2); // 8 8
    v.push_back(10); // 9 16
    v.push_back(9); // 
    v.push_back(6);
    cout<<"Size is : "<<v.size()<<endl;
    cout<<"Capacity is : "<<v.capacity()<<endl;
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    cout<<"New Size : "<<v.size()<<endl;
    cout<<"New Capacity : "<<v.capacity()<<endl;
}