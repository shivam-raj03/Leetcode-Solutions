class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n == 1){
            return 1;
        }
        int i=0;
        int count = 1;
        for(int j = 1; j<n; j++){
            if(nums[i] == nums[j] and count < 2){
                nums[i+1] = nums[j];
                i++;
                count++;
            }
            if(nums[i] != nums[j] and count <= 2){
                nums[i+1] = nums[j];
                i++;
                count = 1;
            }
            
        }
        return i+1;    
    }
};