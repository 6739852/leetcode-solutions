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
    bool isBalanced(TreeNode* root) {
        if(numHeight(root) == -1) return false;
        return true;
    }

    int numHeight(TreeNode* root){
        if(!root) return 0;

        int leftHeight = numHeight(root->left);
        if(leftHeight == -1) return -1;

        int rightHeight = numHeight(root->right);
        if(rightHeight == -1) return -1;

        if(abs(rightHeight - leftHeight) > 1) return -1;

        return max(rightHeight, leftHeight) + 1;
    }
};