#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter no. of rows of 1st matrix : ";
    cin>>m;
    int n;
    cout<<"Enter no. of cols of 1st matrix : ";
    cin>>n;
    int p;
    cout<<"Enter no. of rows of 2nd matrix : ";
    cin>>p;
    int q;
    cout<<"Enter no. of cols of 2nd matrix : ";
    cin>>q;
    if(n==p){
        int a[m][n];
        cout<<"Enter the elements of 1st matrix : "<<endl;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                cin>>a[i][j];
            }

        }
         int b[p][q];
        cout<<"Enter the elements of 2nd matrix : "<<endl;
        for(int i=0; i<p; i++){
            for(int j=0; j<q; j++){
                cin>>b[i][j];
            }
        }

        //resultant matrix
        int res[m][q];
        for(int i=0; i<m; i++){
            for(int j=0; j<q; j++){
                res[i][j] = 0;
                //res[i][j] = a[i][0]*b[0][j] + a[i][1]*b[1][j] + ....upto n(common n or p)
                for(int k=0; k<n; k++){
                    res[i][j] += a[i][k]*b[k][j];
                }
            }
        }
        // print resultant matrix
        cout<<"Multiplication of two matrices : "<<endl;
        for(int i=0; i<m; i++){
            for(int j=0; j<q; j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }

    }else{
        cout<<"Multiplication is not possible : ";
    }
}