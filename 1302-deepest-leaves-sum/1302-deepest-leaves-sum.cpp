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
    int depth( TreeNode* root ){
        if( root == NULL ){
            return 0;
        }
        int c1 = 1+depth(root->left);
        int c2 = 1+depth(root->right);
        return max(c1,c2);
    }
    void helper( TreeNode* root, int &sum ,int i, int depth){
        if( root == NULL ){
            return;
        }
        if(i==depth-1){
            sum+=root->val;
        }
        helper(root->left, sum, i+1, depth);
        helper(root->right, sum, i+1, depth);
        return;
    }
public:
    int deepestLeavesSum(TreeNode* root) {
        int d=depth(root);
        int sum=0;
        helper(root, sum, 0, d);
        return sum;
    }
};