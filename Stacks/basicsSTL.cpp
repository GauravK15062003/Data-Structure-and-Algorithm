#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    // cout<<st.size()<<endl; //0
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    // cout<<st.size()<<endl;  //5
    // st.pop();
    // cout<<st.size()<<endl; //4
    // cout<<st.top()<<endl;  //50

    //printing in reverse order -> emptying the stack
    // while(st.size()>0){
    //     cout<<st.top()<<" ";  // 50 40 30 20 10 
    //     st.pop();
    // }

    //we will use extra stack
    
    // stack<int> temp;
    // cout<<"Stack in reverse order : "<<endl;
    // while(st.size()>0){
    //     cout<<st.top()<<" ";
    //     temp.push(st.top());
    //     st.pop();
    // }
    // // putting element back from temp to stack
    // cout<<endl<<"Stack in normal order : "<<endl;
    // while(temp.size()>0){
    //     cout<<temp.top()<<" ";
    //     st.push(temp.top());
    //     temp.pop();
    // }
    // cout<<endl<<st.size()<<endl;

}