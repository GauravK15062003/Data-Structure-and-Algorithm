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
void reverseK(int k, queue<int>& q){
    stack<int> st;
    for(int i=0;i<k;i++){
        int x = q.front();
        q.pop();
        st.push(x);
    }
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
    for(int i=0;i<q.size()-k;i++){
        q.push(q.front());
        q.pop();
    }
}

int main(){
    queue<int> q;
    int k;
    cout<<"Enter K: ";
    cin>>k;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    display(q);
    reverseK(k, q);
    display(q);

}