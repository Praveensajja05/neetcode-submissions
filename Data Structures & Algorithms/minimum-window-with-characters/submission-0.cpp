class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char , int>given , target;
        int i=0 , n= s.size();
        int formed =0;
        for(char c : t){
            target[c]++;
        }
        int minlen=INT_MAX;
        int start=0;
        int req = target.size();
        for( int j=0 ; j<n;j++){
            if( target.find(s[j])!= target.end()){
                given[s[j]]++;
                if( given[s[j]] == target[s[j]]) formed++;
            }
            while( formed== req){
                if( j-i+1 < minlen){
                    minlen = j-i+1;
                    start =i;
                }
                if( target.find(s[i])!=target.end()){
                    if( given[s[i]] == target[s[i]]) formed--;
                    given[s[i]]--;
                }
                i++;
            }
        }
        if( minlen == INT_MAX) return "";
        return s.substr( start , minlen);
        
    }
};
