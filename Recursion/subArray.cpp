#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    // 1 12 123 1234
    for (int i = 0; i < n; i++)
    {
        for (int k = i; k <=n; k++)
        {
            for (int j = i; j <= k; j++)
            {
                cout << arr[j];
            }
            cout<<endl;
        }
    }
}