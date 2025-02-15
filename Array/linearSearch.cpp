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
    for(int i =0;i<3;i++){
    cout << "\nEnter the element to be searched : ";
    cin >> x;

    // check mark
    bool flag = false;  //false -> Element is not present
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x) flag = true;
    
    }
    if(flag == true) cout<<"Present...";
    else cout<<"Not present...";
    }

}