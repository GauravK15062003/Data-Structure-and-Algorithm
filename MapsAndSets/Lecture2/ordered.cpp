#include<iostream>
#include<set>
#include<map>
using namespace std;

int main() {
    // set<int> s;
    // s.insert(5);
    // s.insert(3);
    // s.insert(6);
    // s.insert(1);
    // for(int ele : s) {
    //     cout<<ele<<" ";
    // }


    //Key will sorted in increasing order not the values
    // map<int, int> m;
    // //(1, 30) (2, 20) (3, 10)
    // m[2] = 20;
    // m[3] = 10;
    // m[1] = 30;
    // for(auto x : m) {
    //     cout<<x.first<<" "<<x.second<<endl;
    // }

    //Sorted in lexographical order
    map<string, int> m;
    m["Gaurav"] = 30;
    m["Anuj"] = 40;
    m["Binod"] = 10;
    for(auto x : m) {
        cout<<x.first<<" "<<x.second<<endl;
    }

}