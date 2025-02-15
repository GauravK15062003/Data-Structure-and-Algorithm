#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string, int> m;
    pair<string, int> p1;
    p1.first = "Gaurav";
    p1.second = 76;
    m.insert(p1);

    m["Harry"] = 24;  //directly insert into maps using key value pair
    m["Kelly"] = 25; 

    for(auto p : m){ //for display
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<m.size()<<endl;

    m.erase("Gaurav");//only write key 

    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<m.size()<<endl;

}