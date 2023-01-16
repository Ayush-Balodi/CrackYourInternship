class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        
        vector<vector<int>> answer;
        for( auto &i:intervals ){
            cout << "Before i : " << i[0] << " " << i[1] << endl;
            cout << "Before newInterval : " << newInterval[0] << " " << newInterval[1] << endl;
            if( i[1] < newInterval[0] ){
                answer.push_back(i);
            }
            else if( newInterval[1] < i[0] ){
                answer.push_back(newInterval);
                newInterval = i;
            }
            else{
                newInterval[0] = min(newInterval[0],i[0]);
                newInterval[1] = max(newInterval[1],i[1]);
            }
            cout << "After i : " << i[0] << " " << i[1] << endl;
            cout << "After newInterval : " << newInterval[0] << " " << newInterval[1] << endl;
        }
        answer.push_back(newInterval);
        return answer;
    }
};