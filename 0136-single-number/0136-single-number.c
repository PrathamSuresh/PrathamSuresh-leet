int singleNumber(int* nums, int numsSize) {
    int count;
    int ele;
    for(int i=0;i<numsSize;i++){
        count=0;
         ele=nums[i];
        for(int j=0;j<numsSize;j++){
           
            if(ele==nums[j]){
                count++;
            }
        }
        if(count==1){
            return ele;
        }
    }
    return 0;
}