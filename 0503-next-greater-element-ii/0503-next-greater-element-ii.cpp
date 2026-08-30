class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> vec(nums.size(),0);
        stack<int> st;
        int index;
        for (int i = 2 * nums.size() - 1; i >= 0; i--) {
            index = i % nums.size();
            while (!st.empty() && st.top() <= nums[index]) {
                st.pop();
            }
            if (i < nums.size()) {
                if (st.empty()) {
                    vec[index]=-1;
                } else {
                   vec[index]=st.top();
                }
            }
            st.push(nums[index]);
        }
        return vec;
    }
};