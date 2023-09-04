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
    vector<vector<int>> v;
    int sum=0;
    void helper(TreeNode* root, vector<int> &temp, int sum, int target){
        if(root==nullptr){ return; }
        temp.push_back(root->val);
        sum += root->val;
        if( root->left == NULL and root->right == NULL ){
            if( sum == target ){
                v.push_back(temp);
            }
        }
        else{
            helper(root->left, temp, sum, target);
            helper(root->right, temp, sum, target);
        }
        temp.pop_back();
        return;
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        
        vector<int> temp;
        helper(root, temp, 0, targetSum);
        return v;
    }
};