class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {

        int n = nums.size();

        vector<int> leftMin(n), rightMin(n);
        vector<int> leftMax(n), rightMax(n);

        stack<int> st;

        // Previous Smaller or Equal
        for(int i = 0; i < n; i++) {

            while(!st.empty() && nums[st.top()] > nums[i]) {
                st.pop();
            }

            leftMin[i] = st.empty() ? -1 : st.top();

            st.push(i);
        }

        while(!st.empty()) st.pop();

        // Next Smaller
        for(int i = n - 1; i >= 0; i--) {

            while(!st.empty() && nums[st.top()] >= nums[i]) {
                st.pop();
            }

            rightMin[i] = st.empty() ? n : st.top();

            st.push(i);
        }

        while(!st.empty()) st.pop();

        // Previous Greater or Equal
        for(int i = 0; i < n; i++) {

            while(!st.empty() && nums[st.top()] < nums[i]) {
                st.pop();
            }

            leftMax[i] = st.empty() ? -1 : st.top();

            st.push(i);
        }

        while(!st.empty()) st.pop();

        // Next Greater
        for(int i = n - 1; i >= 0; i--) {

            while(!st.empty() && nums[st.top()] <= nums[i]) {
                st.pop();
            }

            rightMax[i] = st.empty() ? n : st.top();

            st.push(i);
        }

        long long ans = 0;

        for(int i = 0; i < n; i++) {

            long long minContribution =
                1LL * nums[i] *
                (i - leftMin[i]) *
                (rightMin[i] - i);

            long long maxContribution =
                1LL * nums[i] *
                (i - leftMax[i]) *
                (rightMax[i] - i);

            ans += maxContribution;
            ans -= minContribution;
        }

        return ans;
    }
};