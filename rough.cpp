#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

// void display(vector<int>& v) {
//     for(int i=0; i<v.size(); i++) {
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
// }

int evenlyDivides(int N){
        //code here
        int num = N;
        unordered_set<int> st;
        while(num > 0) {
            int x = num % 10;
            st.insert(x);
            num /= 10;
        }
        int count = 0;
        for(auto it : st) {
            if(N % it == 0) count++;
        }
        return count;
    }
    long long f(long long n, long long& ans) {
        if(n == 1) return 1;
        ans += f(n-1)*f(n-1)*f(n-1) + n*n*n;
        
    }
    long long sumOfSeries(long long n) {
        //code here
        
        // long long sum=0;
        // for(long long i=1;i<=n;i++){
        //     sum+=i*i*i;
        // }
        // return sum;
      //  return n*n*(n+1)*(n+1)/4;
        long long ans = 0;
        return f(n, ans);
    }
int main() {
    // int arr[] = {1, 2, 3, 4};
    // for(int i=0; i<4; i++) {
    //     cout<<&arr[i]<<" ";
    // }

    // vector<int> v = {1, 2, 3, 4};
    // display(v);

    // vector<int> v = {1, -2, 3, -6, 3, -2, 1};
    // int n = v.size();
    // display(v);

    // //sort
    // int i = 0;
    // int j = n - 1;
    // while(i < j) {
    //     if(v[i] < 0) i++;
    //     if(v[j] > 0) j--;
    //     if(i > j) break;
    //     if(v[i] > 0 && v[j] < 0) {
    //         int org = v[i];
    //         v[i] = v[j];
    //         v[j] = org;
    //         i++;
    //         j--;
    //     }
    // }
    // display(v);

    

    // string str = "zbax";
    // string ans = "";
    // int k = 2;
    // for(int i=0; i<str.length(); i++) {
    //     char ch = str[i];
    //     int ascii = ch - 96;
    //     string s = to_string(ascii);
    //     ans += s;
    // }
    // int num = stoi(ans);

    // int n = 0;
    // while(k > 0){
    //     n = 0;
    //     while(num>0) {
    //         n += num % 10;
    //         num /= 10;
    //     }
    //     num = n;
    //     k--;
    // }
        

    // cout<<n;

    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int m = matrix.size();
    int n = matrix[0].size();

    // for(int i=0; i<m; i++) {
    //     if(i % 2 == 0) {
    //         for(int j=0; j<n; j++) {
    //             cout<<matrix[i][j]<<" ";
    //         }
    //     }
    //     else {
    //         for(int j=n-1; j>=0; j--) {
    //             cout<<matrix[i][j]<<" ";
    //         }
    //     }
    // }

    // for(int j=0; j<n; j++) {
    //     if(j%2==0) {
    //         for(int i=0; i<m; i++) cout<<matrix[i][j]<<" ";
    //     }
    //     else {
    //         for(int i=m-1; i>=0; i--) cout<<matrix[i][j]<<" ";
    //     }
    // }

    // string st = "123";
    // cout<<stoi(st);

    // int x = 3 << 4;
    // cout<<x;

    // int x = 16 >> 2;
    // cout<<x;
      
    // int x = 1 << 3;
    // cout<<x;

    

    // int N = 22074;
    // cout<<evenlyDivides(N);

    long long sum = sumOfSeries(5);
    cout<<sum;
    cout<<4+2;
}