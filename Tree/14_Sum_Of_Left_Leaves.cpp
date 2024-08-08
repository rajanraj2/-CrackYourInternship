// Link - https://leetcode.com/problems/sum-of-left-leaves/submissions/1348579959/
// Sum of Left Leaves


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
    int helper(TreeNode* node, bool isLeft) {
        if (node == nullptr) {
            return 0;
        }

        if (node->left == nullptr && node->right == nullptr && isLeft) {
            return node->val;
        }

        return helper(node->left, true) + helper(node->right, false);
    }
public:
    int sumOfLeftLeaves(TreeNode* root) {
        return helper(root, false);
    }
};