class Solution {
public:
    int secondHighest(string s) {
        map<int,int> mp;
        int n=s.length();
        for( int i=0 ; i<n ; i++ ){
            if( isdigit(s[i]) ){
                mp[s[i]-'0']++;
            }
        }
        if(mp.size() >1){
            int size=1;
            for( auto it=mp.rbegin() ; it!=mp.rend() ; it++ ){
                if(size == 2){
                    return it->first;
                }
                size++;
            }
        }
        return -1;
    }
};