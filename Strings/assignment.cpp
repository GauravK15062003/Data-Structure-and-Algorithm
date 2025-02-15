#include<iostream>
#include<climits>
using namespace std;

int main() {
    // string str;
    // cout<<"Enter the string: ";
    // getline(cin, str);

    // for(int i=0; i<str.length(); i++) {
    //     if(i % 2 != 0) {
    //         str[i] = '#';
    //     }
    // }

    // cout<<"New string: "<<str;

    // string str;
    // cout<<"Enter the string : ";
    // getline(cin, str);

    // int count = 0;
    // for(int i=0; i<str.length(); i++) {
    //     if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'
    //       || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') continue;

    //     else count++; 
    // }

    // cout<<count;

    // string str;
    // cout<<"Enter the string: ";
    // getline(cin, str);

    // int i=0;
    // int j = str.length() - 1;
    // bool flag = false;
    // while(i <= j) {
    //     if(str[i] == str[j]) flag = true;
    //     else {
    //         flag = false;
    //         break;
    //         }
    //     i++;
    //     j--;
    // }

    // if(flag == false) cout<<"No";
    // else cout<<"Yes";

    // string str;
    // getline(cin, str);
    // int n = str.length();

    // int i = n / 2;
    // int j = n - 1;
    // while(i <= j) {
    //     char ch = str[i];
    //     str[i] = str[j];
    //     str[j] = ch;
    //     i++;
    //     j--;
    // }

    // cout<<str;

    // string s;
    // cin >> s;
    // int val = 0, pw = 1;
    // while(s.size()) {
    //     val += pw * (s.back() - '0');
    //     s.pop_back();
    //     pw *= 10;
    // }
    // cout<<val;

    // string s;
    // cin>>s;
    // char a = s.front();
    // cout<<a<<endl;
    // cout<<s<<endl;
    // s.push_back('a');
    // cout<<s<<endl;
    // cout<<(89 - '0');

    // string str;
    // cin>>str;
    // for(int i=str.length()-1; i>=0; i--) {
    //     str.push_back(str[i]);
    // }

    // cout<<str;

    string str;
    cin>>str;

    int max = INT_MIN;
    for(int i=0; i<str.length(); i++) {
        int n = str[i] - '0';
        if(n > max) max = n;
    }

    for(int i=0; i<str.length(); i++) {
        int n = str[i] - '0';
        if(max == n) str[i] = '/';
    }

    max = INT_MIN;
    for(int i=0; i<str.length(); i++) {
        int n = str[i] - '0';
        if(n > max) max = n;
    }

    cout<<max;

}