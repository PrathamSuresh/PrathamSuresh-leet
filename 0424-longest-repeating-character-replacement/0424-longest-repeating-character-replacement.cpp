class Solution {
public:
    int characterReplacement(string s, int k) {
        int right=0;
        int left=0;
        int maxFreq=0;
        int len=0;
        int maxLen=0;
        unordered_map<char, int> mp;
        while(right<s.size()){
            mp[s[right]]++;
            maxFreq=max(maxFreq,mp[s[right]]);
            len=right-left+1;
            if(len-maxFreq>k){
                while(right-left+1-maxFreq>k){
                   mp[s[left]]--;
                    left++;
                }
            }
            len=right-left+1;
            maxLen=max(len, maxLen);
            right++;
            
        }
        return maxLen;
    }
};