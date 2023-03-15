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
    int s=0;
    void helper( TreeNode* root, int sum ){
        if( root == NULL ){
            return;
        }
        sum = sum*10+ root->val;
        if(root->left == NULL && root->right == NULL){
            s+=sum;
            return;
        }
        helper(root->left, sum);
        helper(root->right, sum);
        return;
    }
public:
    int sumNumbers(TreeNode* root) {
        helper( root , 0 );
        return s;
    }
};