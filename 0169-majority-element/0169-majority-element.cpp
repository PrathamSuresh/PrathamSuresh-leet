class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        int maxLen=0;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            if(mp[nums[i]]>maxLen){
                maxLen=mp[nums[i]];
                ans=nums[i];
            }
        }
        return ans;
    }
};