class Solution {
public:
    bool canConstruct(string s, int k) {
        if(s.length() < k ){
            return false;
        }
        
        unordered_map<char,int> mp;
        for( auto x:s ) mp[x]++;
        int count=0;
        for( auto x:mp ){
            count += x.second%2;
        }
        if( count<=k ){
            return true;
        }
        return false;
    }
};
/*
    eg
    aabb, k=1| abba
    aabb, k=2 | aa, bb
    aabb, k=3 | a, a, bb
    aabb, k=4 | a, a, b, b

    For any string with odd character count <=k , we can always form k palindrome string for sure with k<=n
    eg2
    aabbc, k=1 | aacbb
    aabbc, k=2 | aca, bb
    aabbc, k=3 | a,a, bcb
    aabbc, k=4 | a, a, c ,bb
    aabbc, k=5 | a, a, c, b, b

    eg3
    aabc, k=1 | N/A
    aabc, k=2 | aba, c
    aabc, k=3 | aa, b, c
    aabc, k=4 | a, a, b, c
*/
