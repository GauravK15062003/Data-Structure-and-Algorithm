#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter no. of rows of matrix : ";
    cin>>m;
    int n;
    cout<<"Enter no. of cols of matrix : ";
    cin>>n;
    int a[m][n];
    cout<<"Enter the elements : "<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }
    // wave print
    cout<<"Row wise Wave print of given matrix : "<<endl;
    for(int i=m-1; i>=0; i--){
       if(i%2!=0){
        for(int j=0; j<n; j++){
            cout<<a[i][j]<<" ";
        }
       }
       else{
        for(int j=n-1; j>=0; j--){
            cout<<a[i][j]<<" ";
        }
       }
    }
    cout<<endl;
    // Column wise printing
    // for(int j=0; j<n; j++){
    //     for(int i=0; i<m; i++){
    //         cout<<a[i][j]<<" ";
    //     }
    // }
     cout<<"column wise Wave print of given matrix : "<<endl;
    for(int j=0; j<n; j++){
        if(j%2==0){
            for(int i=0; i<m; i++){
                cout<<a[i][j]<<" ";
            }
        }
        else{
            for(int i=m-1; i>=0; i--){
                cout<<a[i][j]<<" ";
            }
        }
    }

}