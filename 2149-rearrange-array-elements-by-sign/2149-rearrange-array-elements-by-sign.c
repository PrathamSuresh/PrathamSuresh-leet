/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* rearrangeArray(int* nums, int numsSize, int* returnSize) {
    int* reArranged=malloc(numsSize*sizeof(int));
    int even=0;
    int odd=1;
    for(int i=0;i<numsSize;i++){
        if(nums[i]>0){
            reArranged[even]=nums[i];
            even+=2;
        }else if(nums[i]<0){
            reArranged[odd]=nums[i];
            odd+=2;
        }
    }
    *returnSize=numsSize;
    return reArranged;
}