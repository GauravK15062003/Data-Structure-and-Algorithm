#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    // string s;
    // int n = s.length();
    // getline(cin, s);
    // cout<<s<<endl;
    // reverse(s.begin(), s.begin()+n/2);
    // cout<<s<<endl;

    // int n = 12345;
    // string s = to_string(n);
    // cout<<s.length()<<endl;

    string s = "defcba";
    reverse(s.begin(), s.end());
    cout<<s<<endl;
    sort(s.begin(), s.end());
    cout<<s;
}
