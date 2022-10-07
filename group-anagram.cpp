/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/group-anagrams

    TC = O(n) * O(n^2logn)+O(nlogn) + O(n) => O(n^2logn)
    Auxiliary space = O(n) + O(n) => O(n)
*/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<pair<string,int>> temp;
        int i=0 , n=strs.size() , j=0;
        for( auto s:strs ){
            sort(s.begin(),s.end());
            temp.push_back(make_pair(s,i++));
        }
        
        sort( temp.begin() , temp.end() );
        
        vector<vector<string>> ans;
        vector<string> t;
        
        for( i=0 ; i<n-1 ; i++ ){
            
            if( temp[i].first == temp[i+1].first ){
                t.push_back(strs[temp[i].second]);  
            }
            if( temp[i].first != temp[i+1].first ){
                t.push_back(strs[temp[i].second]);
                ans.push_back(t);
                t.clear();
            }
        }
        t.push_back(strs[temp[i].second]);
        ans.push_back(t);
        return ans;
    }
};