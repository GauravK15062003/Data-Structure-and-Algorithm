#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

string remDuplicate(string s){
    stack<char> st;
    string ans;
    st.push(s[0]);
    for(int i=1;i<s.length();i++){
        if(st.top()!=s[i]){
            st.push(s[i]);
        }
    }
    while(st.size()>0){
        ans += st.top();
        st.pop();
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main(){
    string s = "aaabbcddaabffg";
    cout<<s<<endl;
    string s2 = remDuplicate(s);
    cout<<s2<<endl;
}