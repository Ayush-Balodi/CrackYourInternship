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
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        if( root == NULL )
            return {};
        
        vector<vector<int>> ans;
        vector<int> temp;
        
        queue<TreeNode*> q;
        q.push(root); q.push(NULL);
        
        while( !q.empty() ){
            TreeNode* curr = q.front();
            q.pop();
            
            if( curr == NULL ){
                
                if(q.empty()){
                    ans.push_back(temp);
                    return ans;
                }
                ans.push_back(temp);
                temp.clear();
                q.push(NULL);
                continue;
            }
            else{
                temp.push_back(curr->val);
            }
            
            if(curr->left != NULL)
                q.push(curr->left);
            if(curr->right != NULL)
                q.push(curr->right);
        }
        return ans;
    }
};