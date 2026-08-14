bool search(int* nums, int numsSize, int target) {
    int left=0;
    int right=numsSize-1;
    int mid=-1;
    bool ans=false;
    while(left<=right){
        mid=(left+right)/2;
        if(nums[mid]==target){
            ans=true;
            return ans;
        }else if(nums[left]==nums[mid] && nums[right]==nums[mid]){
            left++;
            right--;
        }
        
        else if(nums[left]<=nums[mid]){
            if(target>=nums[left] && target<nums[mid]){
                right=mid-1;
            }else{
                left=mid+1;
            }
        }else{
            if(target>nums[mid] && target<=nums[right]){
                left=mid+1;
            }else{
                right=mid-1;
            }
        }
    }
    return ans;
}