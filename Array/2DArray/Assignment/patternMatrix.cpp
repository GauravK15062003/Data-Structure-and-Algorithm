#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "Enter m : ";
    cin >> m;
   
    int a[m][m];
    cout << "Enter the elements : " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            if(j==(m-1)/2){
                cout<<a[i][j];
            }
           
            else if(i==(m-1)/2){
                cout<<a[i][j]<<" ";
            }
             else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}