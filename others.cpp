// // #include<iostream>
// // #include<vector>
// // #include<string>
// // using namespace std;

// // int main() {
// //    int a = 5;
// //    int b = 10;
// //    int x = min(a, b);
// //    int y = max(a, b);
// //    int ans; 
// //    while(x!=0) {
// //     int res = y % x;
// //     if(res == 0)  ans = x;
// //     y = x;
// //     x = res;
// //    }

// //    cout<<ans;
// // }
        


// #include<iostream>
// #include<vector>
// using namespace std;


// int main() {
//    int r, c;
//    cout<<"Enter row: ";
//    cin>>r;
//    cout<<"Enter col: ";
//    cin>>c;
//    int arr[r][c];

//    cout<<"Enter number: "<<endl;
//    for(int i=0; i<r; i++) {
//       for(int j=0; j<c; j++) {
//          int n;
//          cin>>n;
//          arr[i][j] = n;
//       }
//    }

//    cout<<"Array: "<<endl;
//    for(int i=0; i<r; i++) {
//       for(int j=0; j<c; j++) {
//          cout<<arr[i][j]<<" ";
//       }
//       cout<<endl;
//    }

//    for(int i=0; i<c; i++) {
//       for(int j=0; j<=i; j++) {
//          if( i==j ) continue;
//          int temp = arr[i][j];
//          arr[i][j] = arr[j][i];
//          arr[j][i] = temp;
//       }
//    }

//    for(int i=0; i<r; i++) {
//       int j = 0;
//       int k = r - 1;
//       while( j <= k ) {
//          int tmp = arr[i][j];
//          arr[i][j] = arr[i][k];
//          arr[i][k] = tmp;
//          j++;
//          k--;
//       }
//    }

//    cout<<"Transpose Array: "<<endl;
//    for(int i=0; i<r; i++) {
//       for(int j=0; j<c; j++) {
//          cout<<arr[i][j]<<" ";
//       }
//       cout<<endl;
//    }
// }

// #include<iostream>
// #include<vector>
// using namespace std;

// int main() {
//    int arr[4][5] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
//    for(int i=0; i<4; i++) {
//       for(int j=0; j<5; j++) {
//          cout<<arr[i][j]<<" ";
//       }
//       cout<<endl;
//    }

//    int minr = 0, minc = 0;
//    int maxr = 3, maxc = 4;
//    cout<<"Spiral Print:"<<endl;
//    while(minr <= maxr && minc <= maxc) {
//       for(int j=minc; j<=maxc; j++) {
//          cout<<arr[minr][j]<<" ";
//       }
//       minr++;

//       for(int i=minr; i<=maxr; i++) {
//          cout<<arr[i][maxc]<<" ";
//       }
//       maxc--;

//       for(int j=maxc; j>=minc; j--) {
//          cout<<arr[maxr][j]<<" ";
//       }
//       maxr--;

//       for(int i=maxr; i>=minr; i--) {
//          cout<<arr[i][minc]<<" ";
//       }
//       minc++;
//    }
   
// }

// #include<iostream>
// #include<vector>
// using namespace std;

// int main() {
//    vector<int> bin = {1, 0, 1, 0, 1};

//    int n = bin.size();
//    int sum = 0;
//    int x = 1;
//    for(int i = n - 1; i >= 0; i--) {
//       sum += x * bin[i];
//       x *= 2;
//    }

//    cout<<sum;
// }


#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
#include<vector>
#include<climits>
using namespace std;

int main () {
    // string s;
    // cin>>s;
    // int n = s.length();
    // // for(int i=0; i<n; i++) {
    // //     if(i % 2 == 0) {
    // //         s[i] = 'a';
    // //     }
    // // }

    // reverse(s.begin()+1, s.begin()+5);
    // cout<<s;


    // string str;
    // getline(cin, str);
    // cout<<"String: "<<str<<endl;
    // int cnt = 0;
    // int n = str.length();
    // if(str[0] != str[1]) cnt++;
    // else if(str[n-1] != str[n-2]) cnt++;
    // for(int i=1; i<n-1; i++) {
        
    //     if(str[i] != str[i-1] && str[i] != str[i+1]) cnt++;
    // }
    // cout<<cnt;

    // vector<int> arr = {7, 1, 2, 5, 8, 4, 9, 3, 6};
    // int k = 4;
    // int n = arr.size();

    // int prevsum = 0;
    // for(int i=0; i<k; i++) {
    //     prevsum += arr[i];
    // }
    // cout<<prevsum<<endl;
    // int maxsum = INT_MIN;
    // int maxidx = -1;
    // int i = 1;
    // int j = k;
    // while(j < n) {
    //     int currsum = prevsum + arr[j] - arr[i - 1];
    //     if(maxsum < currsum) {
    //         maxsum = currsum;
    //         maxidx = i;
    //     }
    //     prevsum = currsum;
    //     i++;
    //     j++;
    // }

    // cout<<maxsum<<" "<<maxidx;

    // string str = "daaldaddd";
    // int n = str.length();
    // vector<int> arr(26, 0);
    // for(int i=0; i<n; i++) {
    //     int idx = int(str[i]) - 97;
    //     arr[idx]++;
    // }

    // int max = INT_MIN;
    // int idx = -1;
    // for(int i=0; i<26; i++) {
    //     if(arr[i] > max) {
    //         max = arr[i];
    //         idx = i;
    //     }
    // }

    // char ch = char(idx+97);
    // cout<<"Char: "<<ch<<endl;
    // cout<<"Count: "<<max;

    // string str;
    // getline(cin, str);
    // string temp;
    // stringstream ss(str);

    // vector<string> arr;
    // while(ss>>temp) {
    //     arr.push_back(temp);
    // }
    // sort(arr.begin(), arr.end());

    // for(int i=0; i<arr.size(); i++) {
    //     cout<<arr[i]<<" ";
    // }

    // int mx = INT_MIN;
    // int n = arr.size();
    // int count = 1;
    // for(int i=1; i<n; i++) {
    //     if(arr[i] == arr[i-1]) {
    //         count++;
    //         mx = max(mx, count);
    //     }
    //     else count = 1;
    // }

    // cout<<mx;


    vector<int> arr = {1, 2, 2, 3, 3, 3, 3, 3, 4, 4, 5, 8, 9};
    int n = arr.size();
    int x = 4;
    int lo = 0;
    int hi = n - 1;
    while(lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if(arr[mid] == x) {
            if(arr[mid - 1] == x) hi = mid - 1;
            else {
                cout<<mid;
                break;
            }
        }
        else if(arr[mid] < x) lo = mid + 1;
        else hi = mid - 1;
    }

    


    

}