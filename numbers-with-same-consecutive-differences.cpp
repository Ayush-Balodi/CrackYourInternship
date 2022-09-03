/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/numbers-with-same-consecutive-differences/

    TC = O(n*2^n)
    SC = O(n*2^n)
*/
class Solution {
private:
    void dfs( int num , int  n , int k , vector<int> &nums){
        if( n == 0 ){
            nums.push_back(num);
            return;
        }
        int digit = num%10;
        if( digit >= k ){
            dfs( num*10 + digit - k , n-1 , k , nums );
        }
        if( k>0 && digit + k < 10 ){
            dfs( num*10 + digit + k , n-1 , k , nums );
        }
        return;
    }
public:
    vector<int> numsSameConsecDiff(int n, int k) {
        
        vector<int> result;
        if( n == 1 ){
            result.push_back(0);
        }
        
        for( int i=1 ; i<10 ; i++ ){
            dfs(i , n-1 , k , result);
        }
        return result;
    }
};