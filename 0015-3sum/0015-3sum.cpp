class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>> vec;

        sort(nums.begin(), nums.end());

        for(int cur = 0; cur < nums.size(); cur++) {

            if(cur > 0 && nums[cur] == nums[cur - 1])
                continue;

            int left = cur + 1;
            int right = nums.size() - 1;

            while(left < right) {

                int sum = nums[cur] + nums[left] + nums[right];

                if(sum == 0) {

                    vec.push_back({nums[cur], nums[left], nums[right]});

                    left++;
                    right--;

                    // Skip duplicate left values
                    while(left < right && nums[left] == nums[left - 1])
                        left++;

                    // Skip duplicate right values
                    while(left < right && nums[right] == nums[right + 1])
                        right--;
                }

                else if(sum < 0) {
                    left++;
                }

                else {
                    right--;
                }
            }
        }

        return vec;
    }
};