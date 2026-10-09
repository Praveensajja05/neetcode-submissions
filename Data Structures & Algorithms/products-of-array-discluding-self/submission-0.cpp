class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n= nums.size();
        vector<int>pref(n) , suf(n); 
        for( int i=0 ;i<n;i++){
            if(i==0) pref[i] = 1;
            else pref[i] = pref[i-1]*nums[i-1];
        }
        for( int j= n-1; j>=0;j--){
            if( j==n-1) suf[j]=1;
            else suf[j]= suf[j+1]*nums[j+1];
        }
        vector<int>ans(n);
        for( int i=0 ;i<n;i++){
            ans[i] = pref[i]*suf[i];
        }
        return ans;

    }
};