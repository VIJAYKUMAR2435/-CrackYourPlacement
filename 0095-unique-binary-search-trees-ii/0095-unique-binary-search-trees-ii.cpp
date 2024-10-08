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


//n points in a line has n! ways to arrange it thus for n=3 there are 6 ways but in answer only 5 are drawn why? since there are 2 fig which are symmetrical thus they are just written once...so how to check that it is unique or not? store it in set and then check.


class Solution {
public:
vector<TreeNode*>ans;
set<vector<int>>st;
vector<int>preo;

// preorder
void traverse(TreeNode*root)
{
   if(root==NULL)
    return;
    preo.push_back(root->val);
    traverse(root->left);
    traverse(root->right);  
}
bool check(TreeNode*ptr)
{
  // return true if it is unique
   vector<int>preorder;
   preo=preorder;//reset the preo since it is global
   traverse(ptr);
   for(int i=0;i<preo.size();i++)
   cout<<preo[i]<<" ";
   cout<<endl;
   if(st.find(preo)==st.end())
   {
     st.insert(preo);
   return true;
   }
   return false;
}

//creating bst

TreeNode*bst(TreeNode*root,int key)
{
    if(root==NULL)
    {
      TreeNode*temp=new TreeNode(key);
     temp->left=NULL;
     temp->right=NULL;
     return temp;
    }

  if(key>root->val)
    root->right=bst(root->right,key);
  else
    root->left=bst(root->left,key);

  return root;
}

void create_bst(vector<int>&nums)
{
TreeNode*root=new TreeNode(nums[0]);//make root
root->left=NULL;
root->right=NULL;

  for(int i=1;i<nums.size();i++)
   root=bst(root,nums[i]);//get always updated root

   if(check(root))
    ans.push_back(root);
}

//make all possible combination..permutation
void func(vector<int>&nums,int index)
{
  if(index==nums.size())
  {
      create_bst(nums);
      return;
  }
  for(int i=index;i<nums.size();i++)
  {
      swap(nums[index],nums[i]);
      func(nums,index+1);
      swap(nums[index],nums[i]);
  }
}
    vector<TreeNode*> generateTrees(int n) {
        vector<int>nums;
        for(int i=1;i<=n;i++)
         nums.push_back(i);
         func(nums,0);
         return ans;
    }
};