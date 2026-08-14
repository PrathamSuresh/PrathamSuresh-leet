void sortColors(int* nums, int numsSize) {
    int Zero=0;
    int One=0;
    int Two=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]==0){
            Zero++;
        }else if(nums[i]==1){
            One++;
        }else{
            Two++;
        }
    }
    One=Zero+One;
    Two=Zero+One+Two;
    for(int i=0;i<Zero;i++){
        nums[i]=0;
    }
    for(int i=Zero;i<One;i++){
        nums[i]=1;
    }
    for(int i=One;i<numsSize;i++){
        nums[i]=2;
    }
}