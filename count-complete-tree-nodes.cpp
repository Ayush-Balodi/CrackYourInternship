/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/count-complete-tree-nodes
 
    All three functions are acceptible
    1> TC = O(n) ; Auxiliaryspcae = O(n)
    2> Tc = O(n) ; Auxiliary space = O(n)
    3> TC = O(log n * log n) ; Auxiliary space = O(n)
*/

class Solution {
public:
    /* 1st function */
    int helper( TreeNode* root , int c ){
        
        if( root == NULL ){
            return c;
        }
        c++;
        c = helper( root->left , c );
        c = helper( root->right , c);
        return c;
    }
    
    /* 2nd function */
    int count( TreeNode* root ){
        
        if(root == NULL){
            return 0;
        }
        return 1 + count(root->left) + count(root->right);
    }
    
    /* 3rd function */
    int count( TreeNode* root ){
        
        if( root == NULL ){
            return 0;
        }
        
        int l1=0, l2=0;
        TreeNode *l=root , *r=root;
        
        while(l) {l1++; l = l->left;}
        while(r) {l2++; r = r->right;}
        if( l1==l2 ){
            return pow(2,l1)-1;
        }
        
        return 1 + count(root->left) + count(root->right);
    }
    
    int countNodes(TreeNode* root) {
        
        return count( root );
    }
};