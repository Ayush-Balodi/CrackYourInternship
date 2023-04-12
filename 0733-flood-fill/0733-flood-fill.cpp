class Solution {
private:
    void helper( vector<vector<int>> &image, int i, int j, int curr, int color, int n, int m){
        if(i<0 or i>=n or j<0 or j>=m){
            return;
        }
        if(image[i][j] == color){
            return;
        }
        if(image[i][j] == curr){
            image[i][j] = color;
            helper(image, i, j+1, curr, color, n, m);
            helper(image, i+1, j, curr, color, n, m);
            helper(image, i-1, j, curr, color, n, m);
            helper(image, i, j-1, curr, color, n, m);
        }
        return;
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        int temp = image[sr][sc];
        int n=image.size(), m=image[0].size();
        helper(image, sr, sc, temp, color, n, m);
        return image;
    }
};