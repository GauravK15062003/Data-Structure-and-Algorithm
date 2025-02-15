#include<iostream>
#include<stack>
using namespace std;

void print(stack<int> st){
    stack<int> temp;
    //Emptying the stack into temp
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    //putting element back from temp to stack
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
    cout<<endl<<st.size()<<endl;
}
int main(){
    stack<int> st;
    stack<int> gt;
    stack<int> rt;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout<<"Original Stack : "<<endl;
    print(st);
    //empty st into gt
    while(st.size()>0){
        gt.push(st.top());
        st.pop();
    }
    //empty gt into rt
    while(gt.size()>0){
        rt.push(gt.top());
        gt.pop();
    }
    //empty rt back into st
    while(rt.size()>0){
        st.push(rt.top());
        rt.pop();
    }
    cout<<"Reverse Stack : "<<endl;
    print(st);

}