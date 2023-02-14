class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        vector<int> m1(26,0);
        vector<int> m2(26,0);
        
        int n1=s1.length() , n2=s2.length();
        
        if( n2<n1 ){
            return false;
        }
        
        int i=0, j=0;
        while( j<n1 ){
            m1[s1[j]-'a']++;
            m2[s2[j++]-'a']++;
        }
        j--;
        
        while( j<n2 ){
            
            if(m1 == m2){
                return true;
            }
            j++;
            if( j!=n2 ){
                m2[s2[j]-'a']++;
            }
            m2[s2[i]-'a']--;
            i++;
        }
        return false;
    }
};