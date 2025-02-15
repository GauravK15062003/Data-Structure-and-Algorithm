#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int arr[] = {3, 1, 2, 5, 4, 6, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // previous greater element array
    int pge[n];

    // Brute Force : TC = O(n^2), SC = O(1)
    //    for(int i=0;i<n;i++){
    //     pge[i] = -1;
    //     for(int j=i+1;j<n;j++){
    //         if(arr[j] > arr[i]){
    //             pge[i] = arr[j];
    //             break;
    //         }
    //     }
    //    }

    // Using a Stack : pop, ans, push and reverse traverse
    // SC = O(n) TC = O(n)
    stack<int> st;
    pge[0] = -1;
    st.push(arr[0]);
    for(int i=1;i<n;i++){
        // pop all the elements smaller than arr[i]
        while(st.size()>0 && st.top()<=arr[i]) st.pop();
        // mark the ans in pge array
        if(st.size()==0) pge[i] = -1;
        else pge[i] = st.top();
        // push the arr[i]
        st.push(arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << pge[i] << " ";
    }
}