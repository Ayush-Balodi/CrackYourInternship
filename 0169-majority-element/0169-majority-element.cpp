class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int n=nums.size()/2;
        map<int,int> mp;
        for( auto x:nums ){
            mp[x]++;
        }
        
        for( auto x:mp ){
            if( x.second > n ){
                return x.first;
            }
        }
        return -1;
    }
};