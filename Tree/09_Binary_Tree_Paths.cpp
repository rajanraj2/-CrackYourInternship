// Link - https://leetcode.com/problems/binary-tree-paths/
// Binary Tree Paths


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
    void dfs(TreeNode* node, string path, vector<string>& paths) {
        if (node != nullptr) {
            path += to_string(node->val);

            if (node->left == nullptr && node->right == nullptr) {
                paths.push_back(path);
            }
            else {
                if (node->left != nullptr) {
                    dfs(node->left, path + "->", paths);
                }
                if (node->right != nullptr) {
                    dfs(node->right, path + "->", paths);
                }
            }
        }
    }
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> paths;
        if (root != nullptr) {
            dfs(root, "", paths);
        }
        return paths;
    }
};