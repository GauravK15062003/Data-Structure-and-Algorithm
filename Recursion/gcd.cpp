#include<iostream>

using namespace std;

// int hcf(int a, int b, int i){ //T.C = O(min(a,b))
//      int x = min(a,b);
//      for(int i = x;i>=2;i--){  
//         if(a%i==0 && b%i==0) return i;
       
//     }
//      return 1;
   
// }

//Euclid's division algo
int gcd(int a, int b){ //T.C = O(log(a+b))
    if(a==0) return b;
    else return gcd(b%a,a);
}
int main(){
 int a = 24;
 int b = 31;
//  cout<<hcf(a,b)<<endl;
cout<<gcd(21,42);
 
}