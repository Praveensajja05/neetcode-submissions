class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>mp;
        int i=0; int n = s.size();
        int ans=0; int maxf =0;
        for( int j=0 ;j<n;j++){
            mp[s[j]]++;
            maxf= max( maxf , mp[s[j]]);
            while( j-i+1 - maxf > k){
                mp[s[i]]--;
                maxf= max( maxf , mp[s[i]]);
                i++;
            }
            ans= max( ans , j-i+1);
        }
        return ans;
    }
};
