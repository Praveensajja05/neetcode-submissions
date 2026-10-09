class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort( nums.begin() , nums.end());
        int n= nums.size();
        vector<vector<int>>ans;
        for( int i=0 ; i<n-2;i++){
            if(i>0 and nums[i]==nums[i-1]) continue;
            int st=i+1 , end= n-1;
            while( st<end){
                int a = nums[i]+nums[st]+nums[end];
                if( a==0){
                    ans.push_back({nums[i] ,nums[st],nums[end]});
                    st++; end--;
                    while( st<n and nums[st]== nums[st-1])st++;
                    while( end>st and nums[end]==nums[end+1]) end--;
                }
                else if( a>0) end--;
                else st++;
            } 
        }
        return ans;
    }
};
