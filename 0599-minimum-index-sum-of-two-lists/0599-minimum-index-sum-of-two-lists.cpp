class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string,int> mp;
        int n=0, indexSum = INT_MAX;
        vector<string> res;
        for( auto x:list1 ) mp[x]=n++;
        n=list2.size();

        for( int i=0 ; i<n ; i++ ){
            if( mp.find(list2[i]) != mp.end() ){
                if( mp[list2[i]]+i < indexSum ){
                    indexSum = mp[list2[i]]+i;
                    res.clear();
                    res.push_back(list2[i]);
                }
                else if( mp[list2[i]]+i == indexSum ){
                    res.push_back(list2[i]);
                }
            }
        }
        return res;
    }
};