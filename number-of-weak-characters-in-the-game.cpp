/* 
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/the-number-of-weak-characters-in-the-game
    
    TC = Θ(nlogn) + O(n) = Θ(nlogn)
    SC = O(1)
*/
class Solution {
public:
    static bool sorted(vector<int>& a , vector<int>& b){
        if( a[0] == b[0] ){
            return (a[1]>b[1]);
        }
        return (a[0]<b[0]);
    }
    int numberOfWeakCharacters(vector<vector<int>>& battle) {
        
        sort(battle.begin(),battle.end(),sorted);
        int n = battle.size(), max = INT_MIN;
        int ans=0;
        
        for( int i=n-1 ; i>=0 ; i-- ){
            if(battle[i][1] < max ){
                ans++;
            }
            if(battle[i][1] > max ){
                max = battle[i][1];
            }
        }
        return ans;
    }
};