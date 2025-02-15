#include<iostream>
#include<stack>
using namespace std;


void display(stack<int>& st){
    if(st.size()==0) return;
    int x = st.top();
    st.pop();
    display(st);
    cout<<x<<" ";
    st.push(x);
}
void displayRev(stack<int>& st){
    if(st.size()==0) return;
    int x = st.top();
    cout<<x<<" ";
    st.pop();
    displayRev(st);
    st.push(x);
}
void pushAtBottom(stack<int>& st, int val){
    if(st.size()==0) {
        st.push(val);
        return;
    }
    int x = st.top();
    st.pop();
    pushAtBottom(st,val);
    st.push(x);
}
void pushAtIdx(stack<int>& st, int val, int idx){
    if(st.size()==idx){
        st.push(val);
        return;
    }
    int x = st.top();
    st.pop();
    pushAtIdx(st,val,idx);
    st.push(x);
}
void reverse(stack<int>& st){
    if(st.size()==0) return;
    int x = st.top();
    st.pop();
    reverse(st);
    pushAtBottom(st,x);
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    // displayRev(st);
    // cout<<endl;
    display(st);  //10 20 30 40 50
    cout<<endl;
    // pushAtBottom(st,60);
    // display(st);  //60 10 20 30 40 50
    // cout<<endl;
    // pushAtIdx(st,70,2);
    // display(st);
    // cout<<endl;  //60 10 70 20 30 40 50
    reverse(st);
    display(st); //50 40 30 20 70 10 60 
    cout<<endl;

}