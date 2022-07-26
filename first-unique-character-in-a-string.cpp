/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/first-unique-character-in-a-string

    TC = O(str.length())
    SC = O(str.length())
 
*/

class Solution {
public:
    int firstUniqChar(string str) {
        
        map<char, int> m;
        map<char,int>::iterator itr;
        
        for( int i=0 ; i<str.length() ; i++){
            char current = str[i];
            if( m.find(current) == m.end() ) {
                m.insert(make_pair(current,i));
            }
            else{
                itr = m.find(current);
                if( itr != m.end() ){
                    itr->second = -1;
                } 
            }
        }
        
        int min = INT_MAX;
        for( itr = m.begin() ; itr!=m.end() ; ++itr){
            
            if( itr->second != -1 && itr->second < min ){
                min = itr->second;
            }
        } 
        
        if( min == INT_MAX ){
            return -1;
        }
        else{
            return min;
        }
        return min;
     }
};

/*
    TC = O(str.length())
    SC = O(1)
*/

class Solution {
public:
    int firstUniqChar(string str) {
        
        int arr[26] = {0};
        for( int i=0 ; i<str.length() ; i++ ){
            
            arr[str[i]-'a']++;
        }
        
        for( int i=0 ; i<str.length() ; i++ ){
            
            if( arr[ str[i] - 'a' ] == 1){
                return i;
            }
        }
        return -1;
    }
};