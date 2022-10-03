/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/contains-duplicate-ii/

    TC = O(n) + O(nlog(n)) + O(n-1) = O(nlog(n))
    SC = O(n) 
    Auxiliary space = O(v)
*/

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        int n=nums.size();
        if( n==1 ){
            return false;
        }
        vector<pair<int,int>> v;
        
        for( int i=0 ; i<n ; i++ ){
            v.push_back(make_pair(nums[i],i));
        }
        
        n=v.size();
        sort(v.begin(),v.end());
        
        for( int i=0 ; i<n-1 ; i++ ){
            if( (v[i].first == v[i+1].first) && (v[i+1].second - v[i].second <= k) ){
                return true;
            }
        }
        return false;
    }
};