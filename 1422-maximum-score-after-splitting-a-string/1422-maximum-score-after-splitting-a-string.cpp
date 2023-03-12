class Solution {
public:
    int maxScore(string s) {
        int n=s.length();
        string t1, t2;
        int sum=0;
        for( int i=0 ; i<n-1 ; i++ ){
            t1 = s.substr(0,i+1);
            t2 = s.substr(i+1);
            cout << t1 << " " << t2<<endl;
            int num = count(t1.begin(),t1.end(),'0') + count(t2.begin(),t2.end(),'1');
            sum = max(sum,num);
            t1.clear(); t2.clear();
        }
        return sum;
    }
};