class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> vec;
        for(int i=0;i<nums1.size();i++){
            int count=0;
            int ans=0;
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    count+=1;
                }
                if(count==1 && nums2[j]>nums1[i]){
                   ans=nums2[j];
                   break;
                }else{
                    ans=-1;
                }
            }
            vec.push_back(ans);
        }
        return vec;
    }
};