class Solution {
public:
    bool helper(vector<int> nums, bool turn_a, int score_a, int score_b, int l, int h){
        if( l>h ){
            return score_a>=score_b;
        }
        if( turn_a == true ){
            return helper( nums, false, score_a+nums[l], score_b, l+1, h ) or helper(nums, false, score_a+nums[h] , score_b, l, h-1 ) ;
        }
        return helper( nums, true, score_a, score_b+nums[l], l+1, h ) and helper(nums, true, score_a , score_b+nums[h], l, h-1 ) ;
    }
    
    bool predictTheWinner(vector<int>& nums) {
        
        int n=nums.size(), l=0, h=n-1;
        return helper( nums, true, 0, 0, l, h );        
    }
};