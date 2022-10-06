/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/find-resultant-array-after-removing-anagrams/

    TC = O(n) * {O(nlogn)+O(nlogn)} => O(n^2logn)
    Auxiliary space = O(n)
*/

class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        
        if( words.empty() ){
            return {};
        }
        
        int n = words.size();
        vector<string> ans;
        ans.push_back( words[0] );
        
        for( int left=0, right=1 ; right<n ; right++ ){
            
            string temp1 = words[left];
            string temp2 = words[right];
            
            sort( temp1.begin() , temp1.end() );
            sort( temp2.begin() , temp2.end() );
            
            if( temp1 == temp2 ){
                continue;
            }
            ans.push_back( words[right] );
            left = right;
        }
        return ans;
    }
};

/*
    TC  = O(n * nlogn ) + O(n)
    Auxiliary space = O(n)
*/

class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        
        vector<string> ans;
        vector<string> temp;
        
        for( auto s: words ){
            sort( s.begin() , s.end() );
            temp.push_back(s);
        }
        
        for( int i=0 ; i<temp.size() ; i++ ){
            
            if( i==0 || temp[i] != temp[i-1] ){
                ans.push_back(words[i]);
            }
        }
        return ans;
    }
};