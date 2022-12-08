class Solution {
public:
    vector<int> partitionLabels(string s) {
         int n = s.size();
        unordered_map<char, pair<int, int>> mp;
        for(int i=0; i<n; i++){
            mp[s[i]].second = i;
            
        }
        for(int i=n-1; i>=0; i--){
            mp[s[i]].first = i;
            
        }
        vector<int> v;
        int start=0, end =0;
        for(int i=0; i<n; i++){
            end = max(mp[s[i]].second, end);
            if(i == end){
                
                v.push_back(end-start+1);
                start = i+1;
            }
        }
        return v;    
    }
};