/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/binary-tree-preorder-traversal/

    TC = O(n)
    SC = O(n)
*/
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        
        if( root == NULL ){
            return {};
        }
        stack<TreeNode*> s;
        s.push( root );
        vector<int> ans;
        TreeNode* curr = NULL;
        
        while( s.empty() == false ){
            
            curr = s.top();
            ans.push_back(curr->val);
            s.pop();
            
            if( curr->right ){
                s.push( curr->right );
            }
            
            if( curr->left ){
                s.push( curr->left );
            }
        }
        
        return ans;
    }
};