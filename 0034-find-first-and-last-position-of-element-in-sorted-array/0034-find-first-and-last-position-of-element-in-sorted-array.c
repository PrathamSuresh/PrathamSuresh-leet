/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int lb(int* nums, int left, int right, int target) {
    int mid;
    int ans=-1;
    while (left <= right) {
        mid = (left + right) / 2;
        if (nums[mid] >= target) {
            ans = mid;
            right = mid - 1;
        } else if (nums[mid] < target) {
            left = mid + 1;
        }
    }
    return ans;
}

int ub(int* nums, int left, int right, int target) {
    int mid;
    int ans=-1;
    while (left <= right) {
        mid = (left + right) / 2;
        if (nums[mid] > target) {
            ans = mid;
            right = mid - 1;

        } else {
            left = mid + 1;
        }
    }
    return ans;
}

int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    int left=0;
    int right=numsSize-1;
    int* arr = malloc(2 * sizeof(int));
    int lowerBound=lb(nums,left,right,target);
    int upperBound=ub(nums,left,right,target);
    *returnSize = 2;
    if(lowerBound==-1 || nums[lowerBound]!=target){
        arr[0]=-1;
        arr[1]=-1;
        return arr;
    }
    arr[0]=lowerBound;
    if(upperBound==-1){
        arr[1]=numsSize-1;
    }else{
        arr[1]=upperBound-1;
        
    }

    
    return arr;
}