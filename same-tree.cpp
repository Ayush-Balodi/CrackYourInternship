/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/same-tree/

    Here we have been provided with the root of the trees, we just need to check the three conditions :
    
    i>if both the roots points to NULL; we return true as they are inturn same
    ii>if one is NULL and other is not; we return false as one being null no need to check.
    iii>if values of the node are different; we return false.
    
    Now, we just recursively check the every node for these condition and if all the conditions meet then it returns true.

    TC = O(n) // as we traverse to every node
    Auxiliary space = O(n)
*/
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
        if( p == NULL && q == NULL ){ return true; }
        if( (p==NULL && q!=NULL) || (p!=NULL && q==NULL) ){ return false; }
        
        if( p->val != q->val ){ return false; }
        bool leftVal = isSameTree( p->left , q->left );
        bool rightVal = isSameTree( p->right , q->right );
        
        return (leftVal && rightVal);
    }
};