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
    long long totalSum=0;
    void helper1( TreeNode* root ){
        if( root == NULL ){
            return;
        }
        helper1( root->left );
        helper1( root->right );
        totalSum += root->val;
    }
    
    int helper2( TreeNode* root , long long &maxProduct ){
        if( root == NULL ){
            return 0;
        }
        int l = helper2( root->left , maxProduct );
        int r = helper2( root->right , maxProduct );
        
        int curr_sum = l + r + root->val;
        long long curr_product = ( curr_sum * (totalSum-curr_sum) );
        
        if( maxProduct < curr_product ){
            maxProduct = curr_product;
        }
        return curr_sum;
    } 
    
    int maxProduct(TreeNode* root) {
        
        helper1( root );
        
        long long maxProduct=1;
        helper2( root , maxProduct );
        
        return (maxProduct%1000000007);
    }
};