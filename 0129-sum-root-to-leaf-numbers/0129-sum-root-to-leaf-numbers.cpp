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
    void helper( TreeNode* root , string temp, vector<string> &ans ){
        if( root == NULL ){
            return;
        }
        if( root->left == NULL && root->right==NULL ){
            temp.push_back(root->val+'0');
            ans.push_back(temp);
            return;
        }
        temp.push_back(root->val+'0');
        helper(root->left, temp, ans);
        helper(root->right, temp, ans);
        return;
    }
public:
    int sumNumbers(TreeNode* root) {
        int sum=0;
        vector<string> ans;
        helper( root, "", ans );
        int n=ans.size();
        for( int i=0 ; i<n ; i++ ){
            cout << ans[i] << " ";
            sum += stoi(ans[i]);
        }
        return sum;
    }
};