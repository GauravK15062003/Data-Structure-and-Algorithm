#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void reversePart(int i, int j, vector<int>& v){
    while(i<=j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    return ; 
}
int main()
{
    int n;
    cout << "Enter the size of array :";
    cin >> n;
    vector<int> v1;
    cout << "Enter the element of array :" << endl;
    for (int j = 0; j < n; j++)
    {
        int q;
        cin >> q;
        v1.push_back(q);
    }
    cout << "Original array : " << endl;
    display(v1);

    // Using a new vector
    //     vector<int> v2;
    //     cout<<"Reverse of the array :"<<endl;
    //     for(int i=0;i<v2.size();i++){
    //         // i + j = n-1
    //         int j = v1.size()-1-i;
    //         v2[i] = v1[j];
    // }
    //     display(v2);

    // Without using new vector
    // int i = 0;
    // int j = v1.size() - 1;
    // cout<<"Reverse of the array : "<<endl;
    // while(i<=j){
    // swap v[i] and v[j]
    //     int temp = v1[i];
    //     v1[i] = v1[j];
    //     v1[j] = temp;
    //     i++;
    //     j--;
    // }

    // display(v1);
    

    reversePart(0, 2, v1);
    display(v1);
}