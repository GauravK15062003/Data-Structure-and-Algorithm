#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the no. of Rows : ";
    cin>>m;
    int n;
    cout<<"Enter the no. of Columns : ";
    cin>>n;
    int arr[m][n];
    cout<<"Enter the elements : ";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Entered Matrix is : "<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}