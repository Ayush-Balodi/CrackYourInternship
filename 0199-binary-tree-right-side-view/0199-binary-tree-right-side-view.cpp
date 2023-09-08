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
    vector<int> rightSideView(TreeNode* root) {
        if( root == NULL ){
            return {};
        }
        queue<TreeNode*> q;
        q.push(root);
        vector<int> result;
        
        while( !q.empty() ){
            int s=q.size();
            vector<int> temp;
            for( int i=0 ; i<s ; i++ ){
                TreeNode* curr = q.front(); q.pop();
                temp.push_back(curr->val);
                if(curr->left != NULL){
                    q.push(curr->left);
                } 
                if(curr->right != NULL){
                    q.push(curr->right);
                }
            }
            result.push_back(temp[s-1]);
        }
        return result;
    }
};