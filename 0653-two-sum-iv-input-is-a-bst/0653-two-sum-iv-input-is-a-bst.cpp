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
    void helper(TreeNode* root, vector<int> &v){
        if(root==NULL){
            return;
        }
        helper(root->left, v);
        v.push_back(root->val);
        helper(root->right, v);
        return;
    }
public:
    bool findTarget(TreeNode* root, int k) {
        vector<int> v;
        helper(root, v);
        
        if(v.size() < 2){
            return false;
        }
        
        int l=0, h=v.size()-1;
        while( l<h ){
            int sum = v[l]+v[h];
            if( sum == k ){
                return true;
            }
            else if( sum < k ){
                l++;
            } 
            else if( sum > k ){
                h--;
            }
        }
        return false;
    }
};