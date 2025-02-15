#include<iostream>
using namespace std;
void swap(int a, int b){
        int temp = a;
        a = b;
        b = temp;
        return;
    }
int main(){
    int a = 4;
    int b = 5;
    swap(a,b);
    cout<<a<<" "<<b;


}

