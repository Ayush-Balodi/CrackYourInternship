class Solution {
public:
    int minimumRounds(vector<int>& nums) {
        
        int n=nums.size();
        map<int,int> mp;
        for( int i=0 ; i<n ; i++ ){
            mp[nums[i]]++;
        }
        
        int freq, ans=0;
        for( auto x : mp ){
            freq = x.second;
            if( x.second == 1 ){
                return -1;
            }
            if( freq%3 == 0 ){
                ans += freq/3;
            }
            else{
                ans += freq/3 + 1;
            }
        }
        return ans;
    }
};