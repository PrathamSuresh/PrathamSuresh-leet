class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> vec = nums;
        vector<int> ans;
        vec.insert(vec.end(), nums.begin(), nums.end());
        stack<int> st;
        for (int i = 2 * nums.size() - 1; i >= 0; i--) {
            while (!st.empty() && st.top() <= vec[i]) {
                st.pop();
            }
            if (i < nums.size()) {
                if (st.empty()) {
                    ans.push_back(-1);
                } else {
                    ans.push_back(st.top());
                }
               
            }
            st.push(vec[i]);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};