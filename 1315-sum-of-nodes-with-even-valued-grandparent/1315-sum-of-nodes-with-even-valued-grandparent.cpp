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
    int dfs( TreeNode* root, int flag1, int flag2 ){
        if( root == NULL ){
            return 0;
        }
        
        int sum=0;
        if( flag2 == 1 ){
            sum = root->val;
        }
        
        flag2=flag1;
        if( root->val % 2 == 0 ){
            flag1=1;
        }
        else{
            flag1=0;
        }
        
        sum += dfs( root->left, flag1, flag2 );
        sum += dfs( root->right, flag1, flag2 );
        
        return sum;
    }
public:
    int sumEvenGrandparent(TreeNode* root) {
        return dfs( root, 0, 0 );
    }
};