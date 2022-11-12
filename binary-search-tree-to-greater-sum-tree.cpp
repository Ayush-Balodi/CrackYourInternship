/* 
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/binary-search-tree-to-greater-sum-tree

    Approach:->
    This approach traverse the tree in inorder style but difference is right one first than left so as to have the sum of the nodes which are greater than current as it is specified in the problem that it is a binary search tree so values in the right to the node are already greater than current node that's why this approach.

    Still don't get it, see the code:-)
    TC = O(n)
    Auxiliary space = O(n)
*/

class Solution {
public:
	// You can also use pointers to point the sum so as not to return any value from function
    int helper( TreeNode* root , int sum ){
        if( root == NULL ){
            return sum;
        }
        sum = helper(root->right, sum);
        sum += root->val;
        root->val = sum;
        sum = helper(root->left,sum);
        
        return sum;
    }
    TreeNode* bstToGst(TreeNode* root) {
        int ans = helper( root , 0 );
        return root;
    }
};