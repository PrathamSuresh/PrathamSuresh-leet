class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> vec;
        for(int i=0;i<nums.size();i++){
            int start=i;
            while(i<nums.size()-1 && (long long)nums[i+1]-nums[i]==1){
                i++;
            }
            if(start!=i){
                vec.push_back(to_string(nums[start])+"->"+to_string(nums[i]));

            }else{
                vec.push_back(to_string(nums[start]));
            }
        }
        return vec;
    }
};