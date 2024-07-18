/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
  bool isLeaf(TreeNode* root){
        if(root->left==NULL && root->right==NULL){
            return true;
        }
        return false;
    }

    void findLeaf(TreeNode* root, vector<TreeNode*>&leaf){
        if(!root) return;
        if(isLeaf(root)){
            leaf.push_back(root);
            return;
        }
        findLeaf(root->left,leaf);
        findLeaf(root->right,leaf);
    }
    void parentmark(TreeNode* root, unordered_map<TreeNode*, TreeNode*>&mpp){
        if(!root){
            return;
        }
        if(root->left){
            mpp[root->left] = root;
        }
        if(root->right){
            mpp[root->right] = root;
        }
        parentmark(root->left,mpp);
        parentmark(root->right,mpp);

    }
    void dfs(TreeNode* root, TreeNode* parent, int dist, int curr, unordered_map<TreeNode*, TreeNode*>&mpp, int &ans){
        if(!root) return;
        if(curr>dist){
            return;
        }
        if(isLeaf(root)){
            ans++;
        }
        if(mpp[root]!=parent)dfs(mpp[root],root,dist,curr+1,mpp,ans);
        if(root->left!=parent)dfs(root->left,root,dist,curr+1,mpp,ans);
        if(root->right!=parent)dfs(root->right,root,dist,curr+1,mpp,ans);

    }
    int countPairs(TreeNode* root, int distance) {
        vector<TreeNode*>leaf;
        findLeaf(root,leaf);
        unordered_map<TreeNode*, TreeNode*>mpp;
        parentmark(root,mpp);
        int ans = - leaf.size();
        TreeNode* par = new TreeNode(-1);
        for(int i=0;i<leaf.size();i++){
            dfs(leaf[i],par,distance,0,mpp,ans);
        }
        return ans/2;
    }
};