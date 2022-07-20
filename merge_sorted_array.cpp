/*
    https://leetcode.com/problems/merge-sorted-array/
    https://github.com/Ayush-Balodi/CrackYourInternship.git

    TC = O(max(m,n))+O(m)+O(n) + O(m+m) = O(m+n)
    SC = O(m+n)
*/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){
        
        int i=0 , j=0 , k=0;
        vector<int> v(m+n);
        
        while( i<m && j<n ){
            
            if( nums1[i] > nums2[j] ){
                v[k] = nums2[j];
                j++; k++;
            }
            else{
                v[k] = nums1[i];
                i++; k++;
            }
        }
        
        while( i<m ){
            v[k] = nums1[i];
            i++; k++;
        }
        
        while( j<n ){
            v[k] = nums2[j];
            j++; k++;
        }
        
        nums1.resize(m+n);
        for( int s=0 ; s<(m+n) ; s++ ){
            nums1[s] = v[s];
        }
        return;
    }
};