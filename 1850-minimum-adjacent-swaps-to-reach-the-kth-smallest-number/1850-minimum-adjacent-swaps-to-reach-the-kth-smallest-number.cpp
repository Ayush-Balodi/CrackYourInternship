class Solution {
public:
    int getMinSwaps(string num, int k) {
        int n=num.length(), count=0;
        string temp(num);
        for( int i=0 ; i<k ; i++ ){
            next_permutation(temp.begin() , temp.end());
        }
        
        for( int i=0 ; i<n ; i++ ){
            if(temp[i] != num[i]){
                int j=i+1;
                while( num[i] != temp[j] ){j++;}
                for(; j>i ; j--){
                    swap(temp[j],temp[j-1]), count++;
                }
            }
        }
        return count;
    }
};
/*
            i
    [5489355142]
            |
    [5489355421]
              j
*/