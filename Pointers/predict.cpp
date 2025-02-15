#include<iostream>
using namespace std;

int main(){
        int a = 15;
        int *p = &a;
        //int b = ++(*p);   // 16 16
        int b = (*p)++;
        cout<<a<<" "<<b;    // 16 15

}