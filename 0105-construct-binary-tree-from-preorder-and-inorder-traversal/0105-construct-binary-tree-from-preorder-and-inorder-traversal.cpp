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
    TreeNode* helper( vector<int> &in, vector<int> &pre , int &index, int inIndex , int endIndex , int n , map<int,int> &mp){
        // base case
        if( index >= n || inIndex > endIndex ){
            return NULL;
        }
        
        int element = pre[index];
        TreeNode* root = new TreeNode(element);
        int position = mp[element];
        index++;
        
        //recursive calls
        root->left = helper(in, pre, index, inIndex, position-1, n , mp );
        root->right = helper(in, pre, index, position+1, endIndex, n, mp);
        return root;     
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preIndex = 0;
        int n=inorder.size();
        map<int,int> mp;
        for( int i=0 ; i<n ; i++ ){
            mp[inorder[i]] = i;
        }
        TreeNode* root = helper(inorder, preorder, preIndex, 0, n-1, n ,mp);
        return root;
    }
};