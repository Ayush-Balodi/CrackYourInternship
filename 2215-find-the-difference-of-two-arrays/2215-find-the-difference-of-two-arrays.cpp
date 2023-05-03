class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        
        map<int,int> mp1;
        map<int,int> mp2;
        vector<vector<int>> v(2);
        
        for( auto x:nums1 ){
            mp1[x]++;
        }
        
        for( auto x:nums2 ){
            mp2[x]++;
        }
        
        for( auto x:nums1 ){
            if( mp2.find(x) == mp2.end() and mp2[x] != -1 )
            {   
                mp2[x]--;
                v[0].push_back(x);
            }    
        }
        for( auto x:nums2 ){
            if( mp1.find(x) == mp1.end() and mp1[x] != -1 )
            {
                mp1[x]--;
                v[1].push_back(x);
            }    
        }
        return v;
    }
    
};