#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    string arr[] = {"0123", "00023", "002", "124", "000125", "0129"};
    int max = stoi(arr[0]);
    string maxS = arr[0];
    for (int i = 1; i <= 5; i++)
    {
        int x = stoi(arr[i]);
        if (x > max)
        {
            max = x;
            maxS = arr[i];
        }
    }
    cout << max<<" "<<maxS;
}