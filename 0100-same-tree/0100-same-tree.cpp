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
    bool helper( TreeNode* r1, TreeNode* r2 ){
        if( r1 == NULL and r2 == NULL ){
            return true;
        }
        if( (r1 == NULL and r2 != NULL) or (r1!=NULL and r2==NULL) ){
            return false;
        }
        if( r1->val == r2->val ){
            bool f1 = helper( r1->left, r2->left );
            bool f2 = helper( r1->right, r2->right );
            return (f1 and f2);
        }
        return false;
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return helper( p, q );
    }
};