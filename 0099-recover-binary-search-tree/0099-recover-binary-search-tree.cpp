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
    vector<int> v;
    int i=0;
    void helper( TreeNode* curr ){
        if( curr == NULL ){
            return;
        }
        helper( curr->left );
        v.push_back(curr->val);
        helper( curr->right );
        return;
    }
    void helper2( TreeNode* root ){
        if(root == NULL){
            return;
        }
        helper2(root->left);
        root->val = v[i++];
        helper2(root->right);
    }
    void recoverTree(TreeNode* root) {
        helper(root);
        sort(v.begin(), v.end());
        helper2(root);
        return;
    }
};