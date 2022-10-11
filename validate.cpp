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
    bool f(TreeNode*root,long int l,long int h){
        if(root==NULL)return true;
        if(root->val>=h||root->val<=l)return false;
        return f(root->left,l,root->val)&&f(root->right,root->val,h);
    }
    bool isValidBST(TreeNode* root) {
        long int h=1e10;
        long int l=-1e10;
        return f(root,l,h);
    }
};
