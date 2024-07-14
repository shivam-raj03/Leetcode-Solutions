class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, -1);
        
        dp[0] = 0;
        for(int i=0; i<n-1; i++){
            int x = dp[i];
            for(int j = i+1; j<= i+nums[i] & j < n; j++){
                if(dp[j] == -1){
                    dp[j] = dp[i] + 1;
                }    
            }
        }
        return dp[n-1];
    }
};