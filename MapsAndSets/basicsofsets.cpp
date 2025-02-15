#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(1);//ignore the same element
    s.erase(2);//delete 2 from the set

    int target = 3;
    // s.find() -> 1)it searches in the set, and if it is not found then it returns the last element
    if(s.find(target) != s.end()){//target exists
        cout<<"Exists..."<<endl;
    }
    else  cout<<"Does not Exists..."<<endl;

    cout<<s.size()<<endl;


    // for each loop used to display the sets
    for(int ele : s){
        cout<<ele<<" ";
    }

}