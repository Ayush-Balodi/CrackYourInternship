class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        
        int max1=INT_MIN, max2=INT_MIN;
        
        int n=matches.size() , m=2;
        for( int i=0 ; i<n ; i++ ){
            for( int j=0 ; j<m ; j++ ){
                if( j == 0 ){
                    max1 = max(matches[i][j] , max1);
                }
                if( j == 1 ){
                    max2 = max(matches[i][j] , max2);
                }
            }
        }
        int k;
        if(max1 > max2){
            k=max1;
        }
        else{
            k=max2;
        }
        
        vector<int> v1(k+1,0), v2(k+1,0);
        for( int i=0 ; i<n ; i++ ){
            for( int j=0 ; j<m ; j++ ){
                if( j == 0 ){
                    v1[matches[i][j]] +=1;
                }
                if( j == 1 ){
                    v2[matches[i][j]] +=1;
                }
            }
        }
        
        vector<vector<int>> ans;
        vector<int> temp , temp1;
        for( int i=1 ; i<=k ; i++ ){
            if( v1[i] > 0 && v2[i] == 0 ){
                temp.push_back(i);
            }
            else if( v2[i] == 1 ){
                temp1.push_back(i);
            }
        }
        ans.push_back(temp);
        ans.push_back(temp1);
        temp.clear() , temp1.clear();
        return ans;
    }
    
};