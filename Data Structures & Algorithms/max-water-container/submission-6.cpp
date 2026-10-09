class Solution {
public:
    int maxArea(vector<int>& heights) { 
         int n = heights.size();
        int l=0 , h=n-1 , ans=0;
        while( l<h){
            int water = (h-l)*min( heights[l] , heights[h]);
            ans= max( ans  , water);
            if( heights[l]<= heights[h]) l++;
            else h--;

        }
        return ans;
    }
};
