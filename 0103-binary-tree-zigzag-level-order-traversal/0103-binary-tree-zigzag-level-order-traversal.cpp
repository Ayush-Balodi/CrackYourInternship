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
        bool flag = true;
        
        while( !q.empty() ){
            int s=q.size();
            vector<int> temp(s);
            for( int i=0 ; i<s ; i++ ){
                TreeNode* curr = q.front(); q.pop();
                
                //determining the position according to flag
                int index = flag ? i:(s-i-1);
                temp[index] = curr->val;
                
                if( curr->left != NULL ){
                    q.push(curr->left);
                }
                if( curr->right != NULL ){
                    q.push(curr->right);
                }
            }
            flag = !flag;
            ans.push_back(temp);
            temp.clear();
        }
        return ans;
    }
};