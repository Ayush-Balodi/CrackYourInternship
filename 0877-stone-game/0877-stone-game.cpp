class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int n=piles.size();
        int l=0, h=n-1;
        int alice=0, bob=0;
        bool flag=false;
        while( l<=h ){
            if( flag==false ){
                if(piles[l] > piles[h]){
                    alice+=piles[l]; 
                    l++;
                }else{
                    alice+=piles[h]; 
                    h--;
                }
            }
            else{
                if(piles[l] > piles[h]){
                    bob+=piles[l]; 
                    l++;
                }else{
                    bob+=piles[h]; 
                    h--;
                }
            }
        }
        
        if( alice > bob )
            return true;
        return false;
    }
};