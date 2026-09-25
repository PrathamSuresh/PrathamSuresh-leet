class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> vec;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==val){
                continue;
            }
            vec.push_back(nums[i]);
            count++;
        }
        nums=vec;
        return count;
    }
};