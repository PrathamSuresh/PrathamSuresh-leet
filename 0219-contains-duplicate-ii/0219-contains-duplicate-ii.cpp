class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> st;
        int left=0;
        for(int right=0;right<nums.size();right++){
            if(st.find(nums[right])!=st.end()){
                return true;
            }
            st.insert(nums[right]);
            if(abs(left-right)>=k){
                st.erase(nums[left]);
                left++;
            }
        }
        return false;
    }
};