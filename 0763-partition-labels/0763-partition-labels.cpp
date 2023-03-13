class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int> mp;
        int n=s.length();
        for( int i=0 ; i<n ; i++ ){
            mp[s[i]] = i;
        }
        
        int maxI=INT_MIN, prev=-1;
        vector<int> ans;
        
        for( int i=0 ; i<n ; i++ ){
            maxI = max(maxI, mp[s[i]]);
            if( maxI == i ){
                ans.push_back(maxI-prev);
                prev=maxI;
            } 
        }
        return ans;
    }
};