class Solution {
public:
    bool isPalindrome(int x) {
        string nums=to_string(x);
        int left=0;
        int right=nums.size()-1;
        while(left<=right){
            if(nums[left]!=nums[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};