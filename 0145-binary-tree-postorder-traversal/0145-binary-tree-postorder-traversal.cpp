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
    void helper(TreeNode* root, vector<int> &v){
        if( root==NULL ){
            return;
        }
        helper(root->left, v);
        helper(root->right, v);
        v.push_back(root->val);
        return;
    } 
public:
    vector<int> postorderTraversal(TreeNode* root) {
        if( root==NULL ){
            return {};
        }
        vector<int> v;
        helper(root, v);
        return v;
    }
};