class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& nums) {
        typedef long long ll;
        int n=nums.size();
        vector<int> v(60,0);
        
        for( int i=0 ; i<n ; i++ ){
            v[nums[i]%60]++;
        }
        int count=0;
        count += (ll)v[0]*(v[0]-1)/2;
        count += (ll)v[30]*(v[30]-1)/2;
        for( int i=1 ; i<30 ; i++ ){
            count += ((ll)v[i]*v[60-i]);
        }
        
        return count;
    }
};