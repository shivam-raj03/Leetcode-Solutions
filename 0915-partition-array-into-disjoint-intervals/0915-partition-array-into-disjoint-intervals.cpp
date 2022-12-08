class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        int n = nums.size();
        int max_1 = nums[0];
        int ans =1;
        int curr = max_1;
        for(int i=1; i<n; i++){
            if(nums[i]<curr){
                ans = i+1;
                curr = max_1;
                
            }
            else{
                max_1 = max(max_1, nums[i]);
            }
            //cout << curr << endl;
        }
        return ans;   
    }
};