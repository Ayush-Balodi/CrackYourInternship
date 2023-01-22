class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_set<int> un;
        for( auto &x : nums ){
            if( x!=0 ){ un.insert(x); }
        }
        return un.size();
    }
};