// Link - https://leetcode.com/problems/balanced-binary-tree/
// Balanced Binary Tree


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
private:
int checkHeight(TreeNode* node) {
    if (node == nullptr) {
        return 0;
    }

    int leftHeight = checkHeight(node->left);
    int rightHeight = checkHeight(node->right);

    if (leftHeight == -1 || rightHeight == -1 || abs(leftHeight - rightHeight) > 1) {
        return -1;
    }

    return 1 + max(leftHeight, rightHeight);
}

public:
    bool isBalanced(TreeNode* root) {
        return checkHeight(root) != -1;
    }
};