#include <iostream>
#include <vector>
using namespace std;

void display(vector<int>& v){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }

void reversePart(int i, int j, vector<int>& v){
    while(i<=j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
}
int main()
{
    int n,k;
    cout << "Enter the size of array : ";
    cin>>n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int q;
        cin >> q;
        v.push_back(q);
    }
    cout<<"Original Array : ";
    display(v);

    cout<<"Enter k steps : ";
    cin>>k;
    if(k>n) k = k%n;

    reversePart(0,n-k-1,v);
    reversePart(n-k,n-1,v);
    reversePart(0,n-1,v);
    cout<<"New Array : ";
    display(v);

}
