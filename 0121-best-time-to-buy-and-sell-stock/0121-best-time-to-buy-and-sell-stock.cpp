class Solution {
public:
    int maxProfit(vector<int>& p) {
        int n = p.size();
        int buy = p[0];
        int ans = 0;
        for(int i=1; i<n; i++){
            if(p[i] > buy){
                ans = max(ans, p[i] - buy);
            }else{
                buy = p[i];
            }
            
        }
        return ans;
    }
};