class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string>dup = strs;
        unordered_map<string, vector<int>>mp;
        for( int i=0 ; i<strs.size() ;i++){
            sort( strs[i].begin() , strs[i].end());
            mp[strs[i]].push_back(i);
        }
        vector<vector<string>>ans;
        auto it = mp.begin();
        while( it!= mp.end()){
            vector<string>temp;
            vector<int>vec = it->second;
            for( int i=0 ; i<vec.size();i++){
                temp.push_back(dup[vec[i]]);
            }
            ans.push_back( temp);
            it++;
        }
        return ans;
    }
};
