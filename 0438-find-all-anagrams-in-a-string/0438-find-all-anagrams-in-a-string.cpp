class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        vector<int> m1(26,0);
        vector<int> m2(26,0);
        vector<int> answer;
        
        int i=0, j=0;
        
        int n1=s.length(), n2=p.length();
        
        if( n1 < n2 ){
            return answer;
        }
        while( j<n2 ){
            m1[s[j]-'a']++;
            m2[p[j++]-'a']++;
        }
        j--;
        
        while( j<n1 ){
            
            if(m1 == m2){
                answer.push_back(i);
            }
            j++;
            if( j != n1 ){
                m1[s[j]-'a']++;
            }
            m1[s[i]-'a']--;
            i++;
        }
        return answer;
    }
};