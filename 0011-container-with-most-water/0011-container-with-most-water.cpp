class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int n=height.size();
        int l=0, h=n-1;
        vector<int> area;
        
        while( l<h ){
            
            int arr=(h-l)*min(height[l], height[h]);
            area.push_back(arr);
            if( height[l] < height[h] ){
                l++;
            }
            else{
                h--;
            }
        }
        
        return *max_element(area.begin(), area.end());
    }
};