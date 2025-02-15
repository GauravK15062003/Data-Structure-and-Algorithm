// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;

// int main() {
//     string name = "rkghav";
//     // cin>>name;
//     // cout<<"Your name: "<<name;

//     // cout<<name.length();
//     // string s = substr;
//     // cout<<s;

//     // reverse(name.begin()+2, name.begin()+4);
//     // cout<<name<<endl;
//     string s = name.substr(2, 6);
//     cout<<s;
// }

#include<iostream>
#include<vector>
using namespace std;


int main() {
    // int arr[] = {1, 2, 3, 4};
    // cout<<sizeof(arr)/sizeof(arr[0]);
    // cout<<&arr<<endl;
    // cout<<arr;

    vector<int> arr = {1, 2, 3, 4, 6, 7, 8};

    int i = 1;
    int j = 5;
    while(i <= j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

    for(int i=0; i<arr.size(); i++) {
        cout<<arr[i]<<" ";
    }

}