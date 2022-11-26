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
    void helper( TreeNode* root , vector<int> &v ){
        if( root == NULL ){
            return;
        }
        v.push_back(root->val);
        helper(root->left,v);
        helper(root->right,v);
    }
public:
    void flatten(TreeNode* root) {
        vector<int> v;
        helper( root , v );
        int n=v.size();
        for( auto x:v ){
            cout << x << " " ;
        }
        for( int i=1 ; i<n ; i++ ){
            root->left = NULL;
            root->right = new TreeNode(v[i]);
            root = root->right;
        }
        return;
    }
};