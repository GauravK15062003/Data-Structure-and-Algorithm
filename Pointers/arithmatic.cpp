#include<iostream>
using namespace std;

int main(){
        // int x = 7;
        // int *ptr = &x;
        // cout<<ptr<<endl;    //0x60ff08
        // ptr = ptr + 1;      //4 Bytes aage
        // cout<<ptr<<endl;    //0x60ff0c

        // int x = 7;
        // int *ptr = &x;
        // cout<<*ptr<<endl;    //0x60ff08
        // ptr = ptr + 1;      //4 Bytes aage
        // cout<<*ptr<<endl;   //6356748

        int x = 7;
        int *ptr = &x;
        cout<<*ptr<<endl;     // 7
        //*ptr = *ptr + 1;      // x = x + 1 i.e 8 
        (*ptr)++;               // x = x + 1 i.e 8
        cout<<*ptr<<endl;

}
