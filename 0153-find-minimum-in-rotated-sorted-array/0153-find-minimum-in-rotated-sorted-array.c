int findMin(int* nums, int numsSize) {
    int left=0;
    int right=numsSize-1;
    int mid;
    int min=nums[0];
    while(left<=right){
        mid=(left+right)/2;
        if(nums[left]<=nums[mid]){
            if(nums[left]<min){
                min=nums[left];
            }
            left=mid+1;
        }else{
            right=mid;
            if(nums[right]<min){
                min=nums[right];
            }            
        }
    }
    return min;
}