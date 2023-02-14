/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
private:
    void helper( vector<int> &answer, Node* root ){
        if( root == NULL ){
            return;
        }
        answer.push_back(root->val);
        for( int i=0 ; i<root->children.size() ; i++ ){
            helper( answer , root->children[i] );
        }
        return;
    }
public:
    vector<int> preorder(Node* root) {
        vector<int> answer;
        helper( answer , root );
        return answer;
    }
};