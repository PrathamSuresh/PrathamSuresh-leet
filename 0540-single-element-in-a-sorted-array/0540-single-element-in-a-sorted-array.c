int singleNonDuplicate(int* nums, int numsSize) {
    int left=0;
    int right=numsSize-1;
    int mid;
    int ans;
    while(left<=right){
        mid=(left+right)/2;
        if(left==right){
            ans=nums[mid];
            return ans;
        }
        if(mid%2==0){
            if(nums[mid]==nums[mid+1]){
                left=mid+1;
            }else{
                right=mid;
            }
        }else{
            if(nums[mid]==nums[mid-1]){
                left=mid+1;
            }else{
                right=mid-1;
            }
        }

    }
    ans=nums[left];
    return ans;
    
}