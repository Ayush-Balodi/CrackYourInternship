class Solution {
private:
    
    int target;
    vector<vector<int>> ans;
public:
    
    void helper( vector<int> &arr, int i, int sum, vector<int> op ){
        
        if( i>=arr.size() ){
            return;
        }
        
        if( arr[i] + sum == target ){
            op.push_back(arr[i]);
            ans.push_back(op);
            return;
        }
        
        if( arr[i] + sum < target ){
            vector<int> op1 = op;
            vector<int> op2 = op;
            
            op2.push_back(arr[i]);
            helper( arr, i, sum+arr[i], op2 );
            helper( arr, i+1, sum, op1 );
        }
        else{
            helper( arr, i+1, sum, op);
        }
        return;
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int req_target) {
        
        ans.clear();
        vector<int> op;
        target = req_target;
        sort(candidates.begin(), candidates.end());
        helper(candidates, 0, 0, op);
        
        return ans;
    }
};