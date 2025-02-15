#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the no. of Rows and columns : ";
    cin>>m;
   
    int arr[m][m];
    cout<<"Enter the elements : "<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Entered Matrix is : "<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    // transpose in the same matrix
    for(int i=0; i<m; i++){
        for(int j=i+1; j<m; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    //print
    cout<<"Transpose Matrix : "<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // reverse each row
    for(int k=0; k<m; k++){
        int i = 0;
        int j = m - 1;
        while(i<=j){
            int temp = arr[k][i];
            arr[k][i] = arr[k][j];
            arr[k][j] = temp;
            i++;
            j--;
        }
    }
    cout<<endl;
    cout<<"Rotated Matrix in clockwise: "<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
     for(int k=0; k<m; k++){
        int i = 0;
        int j = m - 1;
        while(i<=j){
            int temp = arr[i][k];
            arr[i][k] = arr[j][k];
            arr[j][k] = temp;
            i++;
            j--;
        }
    }
    cout<<endl;
    cout<<"Rotated Matrix in Anti-clockwise: "<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}