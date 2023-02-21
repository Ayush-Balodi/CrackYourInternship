class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        
        int n=nums.size();
        map<int,int> mp;
        for( auto it:nums ){
            mp[it]++;
        }
        int sum1=0,sum2=0;
        for( auto it=mp.begin() ; it!=mp.end() ; it++ ){
            sum1 += it->second/2;
            if(it->second%2 != 0 ){
                sum2+=it->second%2;
            }
        }
        return {sum1,sum2};
    }
};