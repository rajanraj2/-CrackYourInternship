// Link - https://leetcode.com/problems/minimum-absolute-difference-in-bst/
// Minimum Absolute Difference in BST


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
    void inOrderTraversal(TreeNode* node, int & preVal, int& mini) {
        if (node == nullptr) return;

        inOrderTraversal(node->left, preVal, mini);

        if (preVal != -1) {
            mini = min(mini, node->val - preVal);
        }
        preVal = node->val;

        inOrderTraversal(node->right, preVal, mini);
    }

public:
    int getMinimumDifference(TreeNode* root) {
        int mini = INT_MAX;
        int preVal = -1;

        inOrderTraversal(root, preVal, mini);
        return mini;
    }
};