/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {

        vector<vector<int>> ans;
        // Queue to store the Nodes of Tree
        queue<TreeNode*> myqueue;
        int count;
        if (root == NULL) {
            return ans;
        }
        // Push the first Node into Queue
        myqueue.push(root);
        // Run the loop till the Queue is Non Empty
        while (!myqueue.empty()) {

            count = myqueue.size();
            vector<int> temp;
            // Iterate each Node in the Queue currently existing and process
            // them
            while (count > 0) {
                // Store the Current Node from Queue
                TreeNode* currentNode = myqueue.front();
                myqueue.pop();
                // Enqueue the Left and Right Nodes of the CurrentNode if they
                // are Not NULL
                if (currentNode->left != NULL) {
                    myqueue.push(currentNode->left);
                }
                if (currentNode->right != NULL) {
                    myqueue.push(currentNode->right);
                }
                // Push the Value of CurrentNode into the temp vector
                temp.push_back(currentNode->val);
                count--;
            }
            // Push the temp vector into the ans
            ans.push_back(temp);
        }
        return ans;
    }
};