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
    void helper( TreeNode* root , int l , int h , int &sum ){
        if( root == NULL ){
            return;
        }
        if( root->val>=l && root->val<=h){
            sum += root->val;
        }
        helper( root->left , l , h , sum );
        helper( root->right , l , h , sum );
        return;
    }
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum=0;
        helper( root , low , high , sum );
        return sum;
    }
};