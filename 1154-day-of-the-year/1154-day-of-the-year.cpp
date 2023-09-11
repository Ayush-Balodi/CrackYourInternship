class Solution {
public:
    int dayOfYear(string data) {
        
        int n=data.size();
        int yp[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int year=stoi(data.substr(0,4)), month=stoi(data.substr(5,2)), day=stoi(data.substr(8));
        cout << day;
        if (month>2 and ((year % 4 == 0 and year % 100 != 0) or (year % 400 == 0))){
            day+=1;
        }
        cout << day;
        while( --month ){
            day+=yp[month-1];
        }
        return day;
    }
};