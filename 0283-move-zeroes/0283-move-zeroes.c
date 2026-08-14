void moveZeroes(int* nums, int numsSize) {
    int newArray[numsSize];
    int countNonZero=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]!=0){
            newArray[countNonZero]=nums[i];
            countNonZero++;
        }
    }
    for(int i=countNonZero;i<numsSize;i++){
        newArray[i]=0;
    }
    for(int i=0;i<numsSize;i++){
        nums[i]=newArray[i];
    }
}