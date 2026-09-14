class Solution {
public:
    int helper(vector<int>& nums, int k) {
        int left = 0;
        int right = 0;
        int count = 0;
        int final = 0;
        while (right < nums.size()) {
            if(nums[right]%2!=0){
                count++;
            }
            while (count > k) {
                if (nums[left] % 2 != 0) {
                    count -= 1;
                }
                left++;
            }
            if (count <= k) {
                final += right - left + 1;
            }
            right++;
        }
        return final;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        return helper(nums, k) - helper(nums, k - 1);
    }
};