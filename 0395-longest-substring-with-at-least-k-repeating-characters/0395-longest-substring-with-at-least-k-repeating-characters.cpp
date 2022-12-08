class Solution {
public:
    int longestSubstring(string s, int k) {
        return solve(s, k, 0, s.size()-1);
    }
    int solve(string s, int k, int l, int r){
        if(l>r)
            return 0;
        unordered_map<char, int>m;
        for(int i=l; i<=r; i++){
            m[s[i]]++;
        }
            
        for(int i=l; i<=r; i++){
            if(m[s[i]]<k){
                return max(solve(s, k, l, i-1), solve(s, k, i+1, r));
            }
        }
        return r-l+1;
    }
};