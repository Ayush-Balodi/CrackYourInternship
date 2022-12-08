class Solution {
private:
    pair<int,int> binarySearch(int key , vector<int> &heaters){
        
        int low=0;
        int high=heaters.size()-1;
        pair<int,int> p = {-1,-1};
        
        while( low <= high ){
            int mid = (low+high)/2;
            if( heaters[mid] == key ){
                p.first = heaters[mid];
                p.second = heaters[mid];
                return p;
            }
            else if( heaters[mid] < key ){
                low = mid+1;
                p.first = heaters[mid];
            } 
            else{
                high = mid-1;
                p.second = heaters[mid]; 
            }
        }
        return p;
    }
    
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        
        int n=houses.size() , m=heaters.size();
        
        sort( heaters.begin() , heaters.end() );
        pair<int,int> p = {-1,-1};
        int ans=0, minval;
        
        for( int i=0 ; i<n ; i++ ){
            
            int find=houses[i];
            p = binarySearch(find , heaters);
            
            int dis1 = ( p.first == -1 ) ? INT_MAX : ( find - p.first ); 
            int dis2 = ( p.second == -1 ) ? INT_MAX : ( p.second - find ); 
            
            if( dis1 < dis2 ){ minval = dis1; }
            else{ minval = dis2; }
            
            if( minval > ans ){
                ans = minval;
            }
        }
        return ans;
    }
};