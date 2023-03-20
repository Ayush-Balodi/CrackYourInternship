class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
       int left,right;
        if(flowerbed.size()==1 && n==1 && flowerbed[0]==0)
            return true;
        int count =0;
        for(int i=0;i<flowerbed.size();i++)
        {
            if(flowerbed[i]==1)
            {
                continue; 
            }
            else
            {
                if(i-1>=0 && flowerbed[i-1]!=1 && i+1<flowerbed.size() && flowerbed[i+1]!=1)
                {
                    count++;
                    flowerbed[i]=1;
                }
                else if (i+1>=flowerbed.size()&& i-1>=0 && flowerbed[i-1]!=1)
                {
                    count++;
                    flowerbed[i]=1;
                }
                else if(i-1<0 && i+1<flowerbed.size() && flowerbed[i+1]!=1)
                {
                    count++;
                    flowerbed[i]=1;
                }
            }
        }
        
        if(count>=n)
             return true;
        
        return false;
    }
};