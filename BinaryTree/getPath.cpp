#include<bits/stdc++.h>
using namespace std;

bool rec(TreeNode* root, vector<int>& arr, int x) {
    if(root == NULL) return false;
    arr.push_back(root->val);
    if(root->val == x) return true;
    if(rec(root->left, arr, x) || rec(root->right, arr, x)) return true;

    arr.pop_back();
    return false;
}
vector<int> getPath(TreeNode* root, int B) {
    vector<int> arr;
    if(root == NULL) return arr;
    rec(root, arr, B);
    return arr;
}
int main() {

}