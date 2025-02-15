//Leetcode-2385(Amount of Time for Binary Tree to be Infected)
#include<iostream>
#include<unordered_set>
#include<unordered_map>
#include<queue>
#include<climits>
using namespace std;

TreeNode* first = NULL;//Global variable

void markParent(TreeNode* root,  unordered_map<TreeNode*, TreeNode*>& parent) {
    if(root==NULL) return;
    if(root->left) parent[root->left] = root;
    if(root->right) parent[root->right] = root;
    markParent(root->left, parent);
    markParent(root->right, parent);
}

void find(TreeNode* root, int start) {
    if(root==NULL) return;
    if(root->val==start) {
        first = root;
        return ;
    }
    find(root->left, start);
    find(root->right, start);
}

int amountOfTime(TreeNode* root, int start) {
    find(root, start);
    unordered_map<TreeNode*, TreeNode*> parent;// <child, parent>
    markParent(root, parent);
    unordered_set<TreeNode*> isInfected;
    isInfected.insert(first);
    queue< pair<TreeNode*, int> > q;//<Node, level>
    q.push({first,0});//Initial case
    int maxLevel = 0;

    //BFS
    while(q.size()>0) {
        pair<TreeNode*, int> p = q.front();
        q.pop();
        TreeNode* temp = p.first;
        int level = p.second;
        maxLevel = max(maxLevel, level);
        if(temp->left) {
            if(isInfected.find(temp->left)==isInfected.end()) {//temp->left infected nhi h to do kaam krna h
                q.push({temp->left, level+1});//1.tem->left ko queue m pair push krna h
                isInfected.insert(temp->left);//2.temp->left ko isInfected set insert krna h
            }
        }
        if(temp->right) {
            if(isInfected.find(temp->right)==isInfected.end()) {//temp->right infected nhi h to do kaam krna h
                q.push({temp->right, level+1});//1.temp->right ko queue m pair push krna h
                isInfected.insert(temp->right);//2.temp->right ko isinfected set insert krna h
            }
        }
        if(parent.find(temp)!=parent.end()) {
            if(isInfected.find(parent[temp])==isInfected.end()) {//temp ka parent infected nhi h to do kaam krna h
                q.push({parent[temp], level+1});//1.temp ke parent ko queue m pair push krna h
                isInfected.insert(parent[temp]);//2.temp ke parent ko isinfected set insert krna h
            }
        }
    }
    return maxLevel;
}

int main() {

}