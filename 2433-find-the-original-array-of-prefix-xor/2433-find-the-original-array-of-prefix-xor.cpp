class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
         int n = pref.size();
        int prev = pref[0];
        vector<int> ans;
        ans.push_back(pref[0]);
        for(int i=1; i<n; i++){
            int x = prev^pref[i];
            prev = prev^x;
            ans.push_back(x);
        }
        return ans;    
    }
};