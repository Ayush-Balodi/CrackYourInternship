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
    int helper( TreeNode* root, int sum ){
        if( root==NULL ){
            return sum;
        }
        sum = helper( root->right, sum );
        sum += root->val;
        root->val = sum;
        sum = helper( root->left, sum );
        
        return sum;
    }
public:
    TreeNode* bstToGst(TreeNode* root) {
        int ans = helper( root, 0 );
        return root;
    }
};