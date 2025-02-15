#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    clock_t start, end;
    double CPU_time_used;
    start = clock();
    // int arr[] = {5, 3, 6, 7, 8, 1, 29, 22, 89, 79, 48, 80, 90, 34, 36, 23, 11, 12, 15, 16};
    int arr[] = {66, 24, 61, 80, 78, 3, 48, 77, 4, 1, 45, 25, 57, 16, 15, 41, 11, 59, 86, 23, 85, 84, 19, 55, 9, 91, 95, 21, 87, 98};
    // int arr[] = {82, 6, 80, 81, 35, 3, 94, 68, 65, 87, 31, 76, 19, 63, 22, 10, 40, 48, 59, 98, 73, 1, 84, 85, 51, 12, 62, 9, 25, 37, 97, 44, 79, 55, 21, 91, 66, 78, 71, 42, 33, 8, 67, 96, 39, 13, 54, 16, 100, 69};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    // bubble sort
    for (int i = 0; i < n - 1; i++)
    {
        for(int j=0; j<n-1; j++){
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            { // swap
                // int temp = arr[j];
                // arr[j] = arr[j+1];
                // arr[j+1] = temp;
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    }
    // bubble sort optimised code
    // for (int i = 0; i < n - 1 ; i++)
    // {
    //     bool flag = true; // assumed sorted initially
    //     for (int j = 0; j < n - 1 - i; j++)
    //     {
    //         if (arr[j] > arr[j + 1])
    //         { // swap
    //             swap(arr[j], arr[j + 1]);
    //             flag == false;
    //         }
    //     }
    //     if (flag == true)
    //     { // swap didn't happend
    //         break;
    //     }
    // }

    // cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    end = clock();
    CPU_time_used = ((double)(end - start) / CLOCKS_PER_SEC);
    cout << CPU_time_used;
}