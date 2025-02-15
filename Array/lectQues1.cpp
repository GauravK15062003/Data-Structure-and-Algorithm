#include<iostream>
using namespace std;

int main(){
        int n;
        cout<<"Enter number of students in a class : ";
        cin>>n;
        int marks[n] ;
        // input
        cout<<"Enter the marks of "<< n<<" Students here : ";
        for(int i = 0; i<n ; i++){
            cin>>marks[i];
        }
        cout<<"Roll No. of Students whose marks is less than 35 : ";
        for(int i = 0; i<n; i++){
            if(marks[i] < 35){
                int rn = i+1;
                cout<<rn<<" ";
            }
        }
}