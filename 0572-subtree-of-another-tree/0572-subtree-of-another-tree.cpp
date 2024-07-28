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
bool isSameTree(TreeNode* s, TreeNode* t) {
    if (s == NULL && t == NULL) {
        return true;
    } else if (s == NULL || t == NULL) {
        return false;
    } else {
        return (s->val == t->val) && isSameTree(s->left, t->left) && isSameTree(s->right, t->right);
    }
} 
   bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (!root) {
        return false;
    }
    if (isSameTree(root, subRoot)) {
        return true;
    } else {
        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
    }
};