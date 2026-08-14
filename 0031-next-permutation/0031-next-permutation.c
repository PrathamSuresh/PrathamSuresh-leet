void reverse(int *nums,int left,int right){
    while(left<right){
        int temp=nums[left];
        nums[left]=nums[right];
        nums[right]=temp;
        left++;
        right--;
    }
}

void nextPermutation(int* nums, int numsSize) {
    int cur=-1;
    for(int i=numsSize-1;i>0;i--){
        if(nums[i-1]<nums[i]){
            cur=i-1;
            break;
        }
    }
       
    if(cur==-1){
        reverse(nums,0,numsSize-1);
        return;
    }
    for(int i=numsSize-1;i>cur;i--){
        if(nums[i]>nums[cur]){
            int temp=nums[cur];
            nums[cur]=nums[i];
            nums[i]=temp;
            break;
        }
    }
    reverse(nums,cur+1,numsSize-1);

}