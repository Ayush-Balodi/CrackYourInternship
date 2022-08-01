/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/binary-tree-postorder-traversal/

    TC = O(n)
    SC = O(n)
*/

class Solution {

private:
    void pot( vector<int> &ans , TreeNode* root ){
        
        if( root == NULL ){
            return;
        }
        pot( ans , root->left );
        pot( ans , root->right );
        ans.push_back( root->val );
        
        return;
    }
public:
    vector<int> postorderTraversal(TreeNode* root) {
        
        if( root == NULL ){
            return {};
        }
        vector<int> ans;
        pot( ans , root );
        return ans;
    }
};