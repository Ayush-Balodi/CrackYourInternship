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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==NULL){
            root = new TreeNode(val);
            return root;
        }
        TreeNode* prev=NULL, *temp=root;
        while( root!=NULL ){
            prev=root;
            if( root->val < val ){
                root=root->right;
            }
            else{
                root=root->left;
            }
        }
        if( val > prev->val ){
            prev->right = new TreeNode(val);
        }
        else{
            prev->left = new TreeNode(val);
        }
        return temp;
    }
};