#include<iostream>
using namespace std;

int main(){
       int arr[] = {4,2,6,1,7};
       int* ptr = arr;  // giving address
       // int* ptr = &arr[0];
       //int* ptr = &arr;  // ERROR

       for(int i=0;i<5;i++){  // Accessing all the elements without using square bracket
        cout<<*ptr<<" ";
        ptr++;
       }
       ptr = arr; // Again pointer is poi0nt0ing to first element
    //    cout<<ptr<<endl;
    //    for(int i = 0;i<5;i++){
    //     cout<<ptr[i]<<" ";
    //    }
    //    cout<<endl;
       *ptr = 8;  //ptr[0] = 8
        ptr++;   // Pointer is pointing to second element
       *ptr = 9;
       ptr--;    // Pointer is pointing to first element
       cout<<endl;
        for(int i=0;i<5;i++){  // Accessing all the elements without using square bracket
        cout<<*ptr<<" ";
        ptr++;
       }
       ptr = arr; 

    


        

}