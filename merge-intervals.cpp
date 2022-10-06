/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/merge-intervals/

    TC = O(nlog(n)) + O(n) = O(nlog(n))
    SC = O(n) 
    Auxiliary space = O(n)
*/

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& interval) {
        
        vector<vector<int>> mergeInterval;
        if( interval.size() == 0 ){
            return mergeInterval;
        }
        sort(interval.begin() , interval.end());
        vector<int> tempInterval = interval[0];
        
        for(auto it : interval){  
            if( it[0] <= tempInterval[1] ){
                tempInterval[1] = max(it[1] ,tempInterval[1]);
            }
            else{
                mergeInterval.push_back(tempInterval);
                tempInterval = it;
            }
        }
        mergeInterval.push_back(tempInterval);
        return mergeInterval;
    }
};