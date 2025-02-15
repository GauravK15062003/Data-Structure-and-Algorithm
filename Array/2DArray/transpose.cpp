#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the no. of Rows : ";
    cin>>m;
    int n;
    cout<<"Enter the no. of columns : ";
    cin>>n;
   
    int arr[m][n];
    cout<<"Enter the elements : "<<endl;
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
    cout<<endl;

    // transpose in the same matrix
    int t[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            t[i][j] = arr[j][i];
        }
    }

    //print
    cout<<"Transpose Matrix : "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
}