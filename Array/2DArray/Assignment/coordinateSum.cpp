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
    int x1, x2, y1, y2;
    cout << "Enter x1 :";
    cin >> x1;
    cout << "Enter y1 :";
    cin >> y1;
    cout << "Enter x2 :";
    cin >> x2;
    cout << "Enter y2 :";
    cin >> y2;
    int sum = 0;
    if (x1 >= 0 && x2 >= 0 && y1 >= 0 && y2 >= 0)
    {  if(x1 >= x2 && y1 >= y2){
        for (int i = x1; i <= x2; i++)
        {
            for (int j = y1; j <= y2; j++)
            {
                sum += a[i][j];
            }
        }}
        else{

             for (int i = x2; i <= x1; i++)
        {
            for (int j = y1; j <= y2; j++)
            {
                sum += a[i][j];
            }
        }
        }
    }
    else{
        cout<<"Enter valid coordinates : ";
    }
    cout<<"Sum is : "<<sum;
}