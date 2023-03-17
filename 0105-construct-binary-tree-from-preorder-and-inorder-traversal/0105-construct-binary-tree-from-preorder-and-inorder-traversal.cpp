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
    int findPos( vector<int> in, int val, int n ){
        for( int i=0 ; i<n ; i++ ){
            if( in[i] == val ){
                return i;
            } 
        }
        return -1;
    }
    TreeNode* helper( vector<int> &in, vector<int> &pre , int &index, int inIndex , int endIndex , int n ){
        // base case
        if( index >= n || inIndex > endIndex ){
            return NULL;
        }
        
        int element = pre[index];
        TreeNode* root = new TreeNode(element);
        int position = findPos(in, element, n);
        index++;
        
        //recursive calls
        root->left = helper(in, pre, index, inIndex, position-1, n );
        root->right = helper(in, pre, index, position+1, endIndex, n);
        return root;     
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preIndex = 0;
        int n=inorder.size();
        TreeNode* root = helper(inorder, preorder, preIndex, 0, n-1, n );
        return root;
    }
};