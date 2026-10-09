class Solution {
public:

    string encode(vector<string>& strs) {
        string s;
        for( auto p: strs){
            s+=( to_string(p.size()) + "#"+p);
        }
        return s;
    }

    vector<string> decode(string s) {
        int n= s.size();
        vector<string>ans;
        int i=0;
        while( i<n){
            int j= s.find('#' ,i);
            int len = stoi( s.substr(i,j-i));
            ans.push_back( s.substr(j+1 , len));
            i=j+1+len;
        }
        return ans;

    }
};
