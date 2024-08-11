// Link - https://www.geeksforgeeks.org/problems/check-whether-bst-contains-dead-end/1
// Check whether BST contains Dead End


/*The Node structure is
struct Node {
int data;
Node * right, * left;
};*/

/*You are required to complete below method */
class Solution{
  private:
    bool isDeadEndUtil(Node* root, int minVal, int maxVal) {
        if (root == nullptr) return false;
        
        if (root->left == nullptr && root->right == nullptr) {
            if (minVal == maxVal) {
                return true;
            }
        }
        
        return isDeadEndUtil(root->left, minVal, root->data - 1) || 
               isDeadEndUtil(root->right, root->data + 1, maxVal);
        
    }
    
  public:
    bool isDeadEnd(Node *root)
    {
        //Your code here
        return isDeadEndUtil(root, 1, INT_MAX);
    }
};