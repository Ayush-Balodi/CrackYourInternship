class Solution {
public:
    bool isValid(int i,int j,int n,int m,vector<vector<int>>& image,int stcolor){
        if(i>=0 && i<n && j>=0 && j<m && image[i][j]==stcolor) {
            return 1;
}
return 0;
}
void dfs(int i,int j,int color,vector<vector<int>>& image,int stcolor,int n,int m){
if(image[i][j]==color)
    return;   
image[i][j]=color;
if(isValid(i-1,j,n,m,image,stcolor)){
dfs(i-1,j,color,image,stcolor,n,m);
}
if(isValid(i+1,j,n,m,image,stcolor)){
dfs(i+1,j,color,image,stcolor,n,m);
}
if(isValid(i,j-1,n,m,image,stcolor)){
dfs(i,j-1,color,image,stcolor,n,m);
}
if(isValid(i,j+1,n,m,image,stcolor)){
dfs(i,j+1,color,image,stcolor,n,m);
}
}
vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
int n=image.size();
int m=image[0].size();
int i=sr,j=sc;
int stcolor=image[i][j];
dfs(i,j,color,image,stcolor,n,m);
return image;
}
};