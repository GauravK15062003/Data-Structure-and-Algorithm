#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter m : ";
    cin >> m;
    cout << "Enter n : ";
    cin >> n;
    int a[m][n];
    cout << "Enter the elements : " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    int sum;
    int add[m];
    for(int i=0; i<m; i++){
        sum = 0;
        for(int j=0; j<n; j++){
            sum += a[i][j];
        }
        add[i] = sum;
    }
    int idx = -1;
    int max = add[0];
    for(int i = 0; i<m; i++){
        if( max<add[i] ) {
            idx = i;
        }
    }
    cout<<"Row no. "<<idx<< " has maximum sum...";
}