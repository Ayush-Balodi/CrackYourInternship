/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/binary-tree-inorder-traversal/

    TC = O(n)
    SC = O(n)
*/
class Solution {

public:
    
    vector<int> inorderTraversal(TreeNode* root) {
        
        if( root == NULL ){
            return {};
        }
        vector<int> res;
        pot( res , root );
        return res;
    }
    
    void pot( vector<int> &res , TreeNode* root ){
        
        if( root == NULL ){
            return;
        }
        pot( res , root->left );
        res.push_back( root->val );
        pot( res , root->right );
        
        return;
    }
};