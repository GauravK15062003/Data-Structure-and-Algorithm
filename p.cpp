#include<bits/stdc++.h>
using namespace std;

int  main() {
    // string s;
    // getline(cin, s);
    // stringstream ss(s);

    // string temp;
    // while(ss>>temp) {
    //     cout<<temp<<endl;
    // }

    // int n = 97;
    // char c = (char)n;
    // cout<<c;

    // vector<string> str = {"0112", "0223", "22", "0121"};
    // int max = INT_MIN;
    // int idx = -1;
    // for(int i=0; i<str.size(); i++) {
    //     int x = stoi(str[i]);
    //     if(max < x) {
    //         max = x;
    //         idx = i;
    //     }
    // }

    // cout<<str[idx]<<" "<<idx<<endl;


    // vector<string> a = {"flower", "flow", "flight"};
    // string ans = "";
    // int n = a.size();
    // sort(a.begin(), a.end());
    // string x = a[0];
    // string y = a[n-1];

    // for(int i=0; i<min(x.size(), y.size()); i++) {
    //     if(x[i] == y[i]) ans += x[i];
    // }

    // cout<<ans;

    string s;
    getline(cin, s);
    vector<string> v;
    stringstream ss(s);
    string temp;
    unordered_map<string, int> m;

    while(ss>>temp) {
        v.push_back(temp);
    }
    
    sort(v.begin(), v.end());
    for(int i=0; i<v.size();i++) {
        m[v[i]]++;
    }
    for(auto x : m) {
        string s = x.first;
        int a = x.second;
        cout<<s<<"->"<<a<<endl;
    }





}