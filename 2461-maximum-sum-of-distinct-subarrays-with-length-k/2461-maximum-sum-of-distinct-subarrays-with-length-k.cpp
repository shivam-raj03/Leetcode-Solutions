class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int j=0;
        long long  sum =0;
        unordered_map<int, int> m;
        long long ans =0;
            
        for(int i=0; i<n; i++){
            sum += nums[i];
            if(m[nums[i]] >= 1){
                while(nums[j] != nums[i]){
                    m[nums[j]]--;
                    sum -= nums[j];
                    j++;
                }
                m[nums[j]]--;
                sum -= nums[j];
                j++;
                
            }
            if(i-j+1 == k){
                ans = max(sum, ans);
                sum -= nums[j];
                m[nums[j]]--;
                j++;
            }
            m[nums[i]]++;
            
        }
        return ans;    
    }
};