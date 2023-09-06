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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if( root == NULL ){
            return {};
        }
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        q.push(root);
        int rot = -1;
        vector<int> temp;
        
        while( !q.empty() ){
            int s=q.size();
            
            for( int i=0 ; i<s ; i++ ){
                TreeNode* curr = q.front(); q.pop();
                temp.push_back(curr->val);
                if( curr->left != NULL ){
                    q.push(curr->left);
                }
                if( curr->right != NULL ){
                    q.push(curr->right);
                }
            }
            if(rot == 1){
                reverse( temp.begin(), temp.end());
            }
            rot*=-1;
            ans.push_back(temp);
            temp.clear();
        }
        return ans;
    }
};