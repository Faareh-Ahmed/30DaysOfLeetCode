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
TreeNode* prev = NULL;
    bool result = true;
    void helper(TreeNode* root){
        if(root == NULL)return;
        helper(root->left);
        if(prev == NULL)prev = root;
        else if(root->val <= prev->val)result = false;
        else prev = root;
        helper(root->right);
    }
    bool isValidBST(TreeNode* root) {
         helper(root);
        return result;
    }
};