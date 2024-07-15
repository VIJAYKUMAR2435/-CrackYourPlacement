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
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
     unordered_map<int, TreeNode*> dic;
        unordered_set<int> root; // true if it could be root

        for (auto & des : descriptions) {
            // check des[0]
            if (dic.find(des[0]) == dic.end()) {
                // new val for the tree, construct a new TreeNode, and could be root
                dic[des[0]] = new TreeNode(des[0]);
                root.insert(des[0]);
            }

            // check des[1]
            if (dic.find(des[1]) == dic.end()) {
                // new val for the tree, construct a new TreeNode
                dic[des[1]] = new TreeNode(des[1]);
            } else {
                // val is already in root, is a child so it couldn't be root
                root.erase(des[1]);
            }

            // construct right or left
            if (des[2] == 0) {
                dic[des[0]]->right = dic[des[1]];
            } else {
                dic[des[0]]->left = dic[des[1]];
            }
        }

        if (root.size() == 1) {
            return dic[*root.begin()];
        }
        return nullptr;
    }
};