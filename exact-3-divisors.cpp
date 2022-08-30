/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://practice.geeksforgeeks.org/batch/dsa-4/track/DSASP-Mathematics/problem/exactly-3-divisors

    TC = O(n^1/2).)(n^1/2)
    SC = O(1)
*/

class Solution{
    private:
    bool prime( int num ){
        
        if( num == 1 ){
            return false;
        }
        for( int i=2 ; i<=sqrt(num) ; i++ ){
            if( num%i == 0 ){
                return false;
            }
        }
        return true;
    }
    
    public:
    int exactly3Divisors(int num)
    {
        int count=0;
        for( int i=1 ; i*i<=num ; i++ ){
            if( prime(i) ){
                count++;
            }
        }
        return count;
    }
};