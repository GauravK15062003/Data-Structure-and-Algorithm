#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<>
using namespace std;
int main(){
    // string s = "aabbbcccdddeefgh";
    // int max = 0;
    // //First find the highest occurrences
    // for(int i=0;i<s.length();i++){
    //     char c = s[i];
    //     int count = 1;
    //     for(int j=i+1;j<s.length();j++){
    //         if(s[i]==s[j]) count++;
    //     }
    //     if(max<count) max = count;
    // }

    // //Generate all the characters in the with highest occurences
    // for(int i=0;i<s.length();i++){
    //     char c = s[i];
    //     int count = 1;
    //     for(int j=i+1;j<s.length();j++){
    //         if(s[i]==s[j]) count++;
    //     }
    //     if(count==max) cout<<s[i]<<" "<<max<<endl;
    // }

    // Method - 2

    // string s = "aacccdddbbbeeef";
    // vector<int> arr(26,0);
    // for(int i=0;i<s.length();i++){
    //     char ch = s[i];
    //     int idx = ch - 'a';
    //     arr[idx]++;
    // }

    // int mx = 0;
    // for(int i=0;i<26;i++){
    //     if(mx<arr[i]) mx = arr[i];
    // }

    // for(int i=0;i<26;i++){
    //     if(mx==arr[i]) {
    //         int ascii = i + 97;
    //         char ch = (char)ascii;
    //         cout<<ch<<" "<<mx<<endl;
    //     }
    // }






    
}