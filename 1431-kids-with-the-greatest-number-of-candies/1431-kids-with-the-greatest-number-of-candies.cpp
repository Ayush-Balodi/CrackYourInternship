class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxNumber=INT_MIN;
        for( auto x:candies ){
            maxNumber = max(maxNumber, x); 
        }
        
        int n = candies.size();
        vector<bool> answer(n,false);
        for( int i=0 ; i<n ; i++ ){
            if( candies[i] + extraCandies >= maxNumber ){
                answer[i] = true;
            }
        }
        return answer;
    }
};