#include <iostream>
using namespace std;

void change(int a[])// not necessary to give array size
{
    a[0] = 5;
}

void change2D(int arr[3][3])// necessary to give row and col size
{
    arr[0][0] = 100;
}
int main()
{
    // int a[3] = {1,2,3};
    // cout<<a[0]<<endl;
    // change(a);
    // cout<<a[0]<<endl;

    int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << arr[0][0] << endl;
    change2D(arr);
    cout << arr[0][0] << endl;
}