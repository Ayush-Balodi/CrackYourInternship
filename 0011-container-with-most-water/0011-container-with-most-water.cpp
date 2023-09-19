class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int n=height.size();
        int l=0, h=n-1;
        int maxarea=INT_MIN;
        
        while( l<h ){
            int area = (h-l)*min(height[l], height[h]);
            
            if( height[l] < height[h] ){
                l++;
            }
            else{
                h--;
            }
            maxarea = max(maxarea, area);
        }
        return maxarea;
    }
};