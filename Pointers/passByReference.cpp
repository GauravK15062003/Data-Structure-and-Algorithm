#include<iostream>
using namespace std;
void swap(int *x, int *y){
        int temp = *x;
        *x = *y;
        *y = temp;
        return;
    }
int main(){
    int a,b;
    cout<<"Enter a and b : ";
    cin>>a>>b;
    cout<<"After Swapping : ";
    int *x = &a;
    int *y = &b;
    swap(x,y);
    cout<<a<<" "<<b;


}

