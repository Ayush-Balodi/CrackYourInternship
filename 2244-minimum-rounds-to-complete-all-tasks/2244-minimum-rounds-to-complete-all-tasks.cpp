class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        
        unordered_map<int,int> m;
        int n=tasks.size();
        for( int i=0 ; i<n ; i++ ){
            m[tasks[i]]++;
        }
        int ans=0;
        for( auto x:m ){
            int freq = x.second;
            if( freq == 1 ){
                return -1;
            }
            if( freq%3 == 0 ){
                ans+=freq/3;
            }
            else{
                ans += (freq/3)+1;
            }
        }
        return ans;
    }
};