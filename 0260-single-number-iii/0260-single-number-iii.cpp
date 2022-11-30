class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
         int n = nums.size();
        long long  xr = 0;
        for(int i=0; i<n; i++){
            xr ^= nums[i];
        }
        int x = (xr & (xr - 1)) ^ xr;
        int f_n = 0;
        for(int i=0; i<n; i++){
            if(x & nums[i])
                f_n ^= nums[i];
            
        }
        int s_n = xr^f_n;
        return {f_n, s_n};    
    }
};