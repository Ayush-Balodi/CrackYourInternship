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
    bool helper(TreeNode* root, long max, long min){
        if(root == NULL){
            return true;
        }
        if(root->val > min and root->val < max){
            bool l = helper(root->left, root->val, min);
            bool r = helper(root->right, max, root->val);
            
            return l and r;
        }
        return false;
    }
public:
    bool isValidBST(TreeNode* root) {
        return helper(root, LONG_MAX, LONG_MIN);
    }
};