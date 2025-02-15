#include <iostream>
using namespace std;

int main()
{
    int n, x;

    cout << "Enter the size : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    for(int i = 0;i<5;i++){
    cout << "\nEnter the element to be count :" ;
    cin >> x;
    int count = 0;
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>x){
            count++;
        }
    }
    cout<<count;
    }
}