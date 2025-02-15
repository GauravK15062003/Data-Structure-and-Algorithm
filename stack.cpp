#include<iostream>
#include<stack>
using namespace std;
 
void display(stack<int> st) {
    if(st.size() == 0) return;
    int x = st.top();
    st.pop();
    display(st);
    cout<<x<<" ";
    st.push(x);
}

void pushAtIndex(stack<int>& st, int val, int idx) {
    stack<int> temp;
    while(st.size() > idx) {
        temp.push(st.top());
        st.pop();
    }

    st.push(val);
    while(temp.size() > 0) {
        st.push(temp.top());
        temp.pop();
    }
}

void pushAtBottom(stack<int>& st, int val) {
    stack<int> temp;
    while(st.size() > 0) {
        temp.push(st.top());
        st.pop();
    }

    st.push(val);
    while(temp.size() > 0) {
        st.push(temp.top());
        temp.pop();
    }
}

void pushAtBottomRec(stack<int>& st, int val) {
    if(st.size() == 0) {
        st.push(val);
        return;
    }
    int x = st.top();
    st.pop();
    pushAtBottomRec(st, val);
    st.push(x);
}
int main() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    display(st);
    pushAtIndex(st, 6, 2);
    cout<<endl;
    display(st);
    pushAtBottom(st, 7);
    cout<<endl;
    display(st);
    pushAtBottomRec(st, 8);
    cout<<endl;
    display(st);

}