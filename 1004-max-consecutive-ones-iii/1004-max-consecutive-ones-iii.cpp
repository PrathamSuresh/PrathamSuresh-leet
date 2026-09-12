class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0;
        int right=0;
        int len=0;
        int maxLen=0;
        int zCount=0;
        while(right<nums.size()){
            if(nums[right]==0){
                zCount++;
            }
            while(zCount>k){
                if(nums[left]==0){
                    zCount--;
                }
                left++;
            }
            len=right-left+1;
            maxLen=max(len,maxLen);
            right++;
        }
        return maxLen;
    }
};