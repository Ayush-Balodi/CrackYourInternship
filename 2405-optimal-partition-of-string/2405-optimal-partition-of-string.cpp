class Solution {
public:
    int partitionString(string s) {
        
        unordered_map<char,int> mp;
        int n=s.length(), count=0;
        
        for( int i=0 ; i<n ; i++ ){
            mp[s[i]]++;
            if(mp[s[i]]>1){
                i--;
                mp.clear();
                count++;
            }
        }
        return count+1;
    }
};