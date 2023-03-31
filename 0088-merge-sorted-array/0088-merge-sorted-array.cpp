class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> temp(m+n,0);
        int i=0, j=0, k=0;
        
        while( i<m and j<n ){
            if( nums1[i] <= nums2[j] ){
                temp[k++] = nums1[i++]; 
            }
            else{
                temp[k++] = nums2[j++];
            }
        }
        
        while( i<m ){
            temp[k++] = nums1[i++];
        }
        
        while( j<n ){
            temp[k++] = nums2[j++];
        }
        
        nums1.resize(k);
        for( int i=0 ; i<k ; i++ ){
            nums1[i] = temp[i];
        }
        return;
    }
};