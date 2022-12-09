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
    int result=0;
    
    void helper( TreeNode* root , int currMax , int currMin ){
        if( root == NULL ){
            return;
        }
        int possible = max(abs(root->val-currMax),abs(root->val-currMin));
        result = max( result , possible );
        currMax = max( currMax , root->val );
        currMin = min( currMin , root->val );
        
        helper( root->left , currMax , currMin );
        helper( root->right , currMax , currMin );
        return;        
    }
    
    int maxAncestorDiff(TreeNode* root) {
        
        helper( root , root->val , root->val );
        return result;
    }
};