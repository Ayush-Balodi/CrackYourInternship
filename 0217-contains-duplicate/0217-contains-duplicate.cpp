class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        set<int> s;
        int n=nums.size();
        for( auto x:nums ){
            s.insert(x);
        }
        if(s.size()<n)
            return true;
        return false;
    }
};