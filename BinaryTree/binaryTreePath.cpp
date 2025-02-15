#include<iostream>
#include<vector>
using namespace std;
class TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
void helper(TreeNode* root, string s, vector<int>& ans){
        if(root==NULL) return;
        string a = to_string(root->val);
        if(root->left==NULL && root->right==NULL){
            s += a;
            ans.push_back(s);
            return;
        }
        helper(root->left, s+a+"->", ans);
        helper(root->right, s+a+"->", ans);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        helper(root, "", ans);
        return ans;
    }
