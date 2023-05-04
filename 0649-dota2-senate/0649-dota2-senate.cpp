class Solution {
public:
    string predictPartyVictory(string senate) {
        
        int n = senate.size();
        deque<int> D, R;
        
        for( int i=0 ; i<n ; i++ ){
            if( senate[i] == 'R' ){
                R.push_back(i);
            }
            else{
                D.push_back(i);
            }
        }
        
        while( !R.empty() and !D.empty() ){
            int rturn = R.front();
            R.pop_front();
            int dturn = D.front();
            D.pop_front();
            
            if( rturn < dturn ){
                R.push_back(rturn + n);
            }
            else{
                D.push_back(dturn + n);
            }
        }
        
        if( R.empty() ){
            return "Dire";
        }
        return "Radiant";
    }
};