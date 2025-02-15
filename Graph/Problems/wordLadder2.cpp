#include<iostream>
#include<vector>
#include<queue>
#include<unordered_set>
using namespace std;

vector<vector<string>> findSequences(string beginWord, string endWord, vector<string>& wordList) {
    unordered_set<string> st(wordList.begin(), wordList.end());
    queue<vector<string>> q;
    q.push({beginWord});
    vector<string> usedOnLevel;
    usedOnLevel.push_back(beginWord);
    int level = 0;
    vector<vector<string>> ans;
    

}
int main() {

}