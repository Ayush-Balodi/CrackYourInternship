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
/*This is the solution with time complexicity O(n) and space as O(1) as I haven't considered the stack as space. In previous solution I have utilized the preorder sequence and sorted it to construct a correct BST but now I will mark correction in the same by updating the unsorted members
There will be two cases:
i> they are adjacent
ii> they are not adjacent
*/
class Solution {
private:
    TreeNode *prev, *middle, *last, *first;
public:
    void inorder( TreeNode* root ){
        if( root == NULL ){
            return;
        }
        inorder( root->left );
        if( (prev!= NULL) and (root->val < prev->val) ){
            
            //first violation mark first and middle
            if( first == NULL ){
                first = prev;
                middle = root;
            }
            // this is for the second time of violation
            else{
                last = root;
            }
        }
        //marking the previous
        prev = root;
        inorder( root->right );
        return;
    }
    
    void recoverTree(TreeNode* root) {
        first = middle = last = NULL;
        prev = new TreeNode(INT_MIN);
        inorder(root);
        if( first && last ){ swap(first->val, last->val); }
        else if( first && middle ){ swap(first->val, middle->val); }
        return;
    }
};