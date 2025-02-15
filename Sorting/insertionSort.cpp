#include <iostream>
using namespace std;
int main()
{
    int arr[] = {4, 3, 2, 1, 60};
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // Insertion Sort
    for (int i = 1; i < n; i++)
    {
        int j = i;
        // while (j >= i)
        // {
        //     if (arr[j] >= arr[j - 1])
        //         break;
        //     else
        //     {
        //         swap(arr[j], arr[j - 1]);
        //         j--;
        //     }
       // }
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[i], arr[j-1]);
            j--;
        }
    }
     for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}