/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/intersection-of-two-arrays-ii/submissions/

    TC = O(mn)
    SC = O(min(m,n))
*/
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        int m = nums1.size() , n =nums2.size();
        vector<int> nums;
        
        for( int i=0 ; i<m ; i++ ){
            for( int j=0 ; j<n ; j++ ){
                if( nums1[i] == nums2[j] ){
                    nums.push_back(nums1[i]);
                    nums2[j] = -1;
                    break;
                }
            }
        }
        return nums;
    }
};

/*
    TC = O(min(m,n))
    SC = O(min(m,n))
*/

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        sort( nums1.begin() , nums1.end() );
        sort( nums2.begin() , nums2.end() );
        
        int i=0, j=0;
        vector<int> v;
        
        while( i<nums1.size() && j<nums2.size() ){
            
            if(nums1[i] == nums2[j]){
                
                v.push_back(nums1[i]);
                i++; j++;
            }
            else if( nums1[i] < nums2[j] ){
                i++;
            }
            else{
                j++;
            }
        }
        return v;
    }
};

/*
    TC = O(n)
    SC = O(1)
*/

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        map<int,int> m;
        int n = nums1.size();
        for( int i=0 ; i<n ; i++ ){
            m[nums1[i]]++;
        }
        
        n = nums2.size();
        int k=0;
        for( int i=0 ; i<n ; i++ ){
            if( m[nums2[i]] > 0 ){
                nums1[k++] = nums2[i];
                m[nums2[i]]--;
            }
        }
        
        return vector<int>(nums1.begin() ,nums1.begin()+k);
    }
};