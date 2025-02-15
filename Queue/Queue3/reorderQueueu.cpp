#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void display(queue<int>& q){
    int n = q.size();
   for(int i =0 ;i<n;i++){
        int x = q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}
void reorderQueue(queue<int>& q){
    stack<int> st;
    int n = q.size();
    // STEP-1: pop 1st half of the q to the st
    for(int i=0;i<n/2;i++){
        st.push(q.front());
        q.pop();
    }
    while(st.size()>0){//empty the st to the q
        q.push(st.top());
        st.pop();
    }
    // STEP-2: pop 1st(2nd) half of the q to st
    for(int i=0;i<n/2;i++){
        st.push(q.front());
        q.pop();
    }
    while(st.size()>0){//empty the st to the q
        q.push(st.top());
        st.pop();
        q.push(q.front());
        q.pop();
    }
    // STEP-3: Now Reverse the q using the st
    while(q.size()>0){//empty the q to the st
        st.push(q.front());
        q.pop();
    }
    while(st.size()>0){//empty the st to q
        q.push(st.top());
        st.pop();
    }
}

int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    display(q);
    reorderQueue(q);
    display(q);

}