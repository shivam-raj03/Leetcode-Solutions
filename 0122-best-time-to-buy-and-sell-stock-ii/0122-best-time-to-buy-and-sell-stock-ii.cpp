class Solution {
public:
    int maxProfit(vector<int>& p) {
        int  n = p.size();
        int ans = 0;
        int buy = p[0];
        for(int i=1; i<n; i++){
            if(p[i] > buy){
                ans += p[i] - buy;
                buy = p[i];
            }else{
                buy = p[i];
            }
        }
        return ans;
    }
};