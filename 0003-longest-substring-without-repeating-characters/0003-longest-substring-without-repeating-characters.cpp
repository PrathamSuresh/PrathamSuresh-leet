class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int final = 0;

        for (int i = 0; i < s.size(); i++) {
            vector<char> vec;
            int ans = 0;

            for (int j = i; j < s.size(); j++) {

                if (find(vec.begin(), vec.end(), s[j]) != vec.end()) {
                    break;
                }

                vec.push_back(s[j]);
                ans++;

                final = max(final, ans);
            }
        }

        return final;
    }
};