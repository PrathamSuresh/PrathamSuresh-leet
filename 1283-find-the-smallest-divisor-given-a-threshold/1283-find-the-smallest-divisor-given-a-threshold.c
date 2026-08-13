int maxNum(int* nums, int numsSize) {
    int max = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] > max) {
            max = nums[i];
        }
    }
    return max;
}

int check(int* nums, int numsSize, int mid) {
    int ans = 0;
    for (int i = 0; i < numsSize; i++) {
        ans += (nums[i] + mid - 1) / mid;
    }
    return ans;
}

int smallestDivisor(int* nums, int numsSize, int threshold) {
    int max = maxNum(nums, numsSize);
    int left = 1;
    int right = max;
    int mid;
    int ans = 0;
    int final = 0;
    while (left <= right) {
        ans = 0;
        mid = (left + right) / 2;
        ans = check(nums, numsSize, mid);
        if (ans <= threshold) {
            final = mid;
            right=mid-1;
        } else {
            left=mid+1;
        }
    }
    return final;
}