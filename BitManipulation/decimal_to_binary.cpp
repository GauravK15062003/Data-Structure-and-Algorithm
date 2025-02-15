#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string decimal_to_binary(int num) {
    string ans = "";
    // while(num > 0) {
    //     int x = num % 2;
    //     ans += to_string(x);
    //     num /= 2;
    // }
    // reverse(ans.begin(), ans.end());
    // return ans;

    //Method-2:
    while(num > 0) {
        if(num % 2 == 0) {
            ans = '0' + ans;
        } else {
            ans = '1' + ans;
        }
        num /= 2;
    }
    return ans;
}
int main() {
    int num = 1000;
    string ans = decimal_to_binary(num);
    cout<<ans;

}