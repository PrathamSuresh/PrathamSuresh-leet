class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int, int> mp;
        int left = 0;
        int right = 0;
        int maxLen = 0;
        while (right < s.size()) {
            if (mp.find(s[right]) != mp.end()) {
                if (mp[s[right]] >= left) {

                    left = mp[s[right]] + 1;
                }
            }
            int len = right - left + 1;
            mp[s[right]] = right;
            maxLen = max(maxLen, len);
            right++;
        }
        return maxLen;
    }
};