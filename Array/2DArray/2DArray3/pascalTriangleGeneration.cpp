#include <iostream>
#include <vector>
using namespace std;

vector< vector<int> > pascal(int numRows){
    int m = numRows;
    vector< vector<int> > v;
    for(int i=1; i<=m; i++){
        vector<int> a(i);
        v.push_back(a);
    }
    // generate
    for(int i=0; i<m; i++){
        for(int j=0; j<=i; j++){
            if(j==0 || j==i) 
                v[i][j] = 1;
            else
                v[i][j] = v[i-1][j] + v[i-1][j-1];
        }
    }
    return v;
}
int main()
{   int n;
    cout<<"Enter integer : ";
    cin>>n;
    vector< vector<int> > v = pascal(n);
    
    // print
    cout<<"Pascal Triangle : "<<endl;
     for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}