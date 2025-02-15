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
    cout<<endl;

    // spiral print
    int minr = 0, minc = 0;
    int maxr = m-1, maxc = n-1;
    cout<<"Spiral print of given matrix : "<<endl;
    while(minr<=maxr && minc<=maxc){
        // right
        for(int j=minc; j<=maxc; j++){
            cout<<a[minr][j]<<" ";
        }
        minr++;
        if(minr>maxr || minc>maxc) break;
        // down
        for(int i=minr; i<=maxr; i++){
            cout<<a[i][maxc]<<" ";
        }
        maxc--;
         if(minr>maxr || minc>maxc) break;
        // left
        for(int j=maxc; j>=minc; j--){
            cout<<a[maxr][j]<<" ";
        }
        maxr--;
         if(minr>maxr || minc>maxc) break;
        // up
        for(int i=maxr; i>=minr; i--){
            cout<<a[i][minc]<<" ";
        }
        minc++;


    }

    

}