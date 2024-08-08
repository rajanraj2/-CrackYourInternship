// Link - https://leetcode.com/problems/path-sum/description/
// Path Sum


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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root ==  nullptr) return false;

        if (root->left == nullptr && root->right == nullptr) {
            return root->val == targetSum;
        }

        int newTargetSum = targetSum - root->val;
        return hasPathSum(root->left, newTargetSum) || hasPathSum(root->right, newTargetSum);
    }
};