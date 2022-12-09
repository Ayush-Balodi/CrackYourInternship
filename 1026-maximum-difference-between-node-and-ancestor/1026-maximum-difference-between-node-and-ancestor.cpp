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
    int helper( TreeNode* root , vector<pair<int,int>> &v ){
        if( root == NULL ){
            return 0;
        }
        int c1 = 1 + helper( root->left , v );
        int c2 = 1 + helper( root->right , v );
        v.push_back({root->val,(c1+c2)/2-1});
        cout << "root->val = " << root->val << " " << (c1+c2)/2-1 <<endl;
        return c1+c2;
    }
public:
    int maxAncestorDiff(TreeNode* root) {
        
        vector<pair<int,int>> v;
        int c = helper( root , v );
        int n = v.size();
        int maxval = INT_MIN;
        
        cout << "MAXVAL" << endl;
        for( int i=n-1 ; i>=0 ; i-- ){
            int count = v[i].second;
            int j=i-1;
            while( count-- ){
                int temp = fabs(v[i].first - v[j].first);
                if(  temp > maxval ){
                    maxval = fabs(v[i].first - v[j].first);
                    cout << maxval << " ";
                }
                j--;
            }
        }
        return maxval;
    }
};