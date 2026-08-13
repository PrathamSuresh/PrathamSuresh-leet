int smallestDivisor(int* nums, int numsSize, int threshold) {
    int low = 1;
    int high = 0;

    // Find maximum element
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] > high)
            high = nums[i];
    }

    // Binary search
    while (low <= high) {
        int mid = low + (high - low) / 2;
        int sum = 0;

        for (int i = 0; i < numsSize; i++) {
            sum += (nums[i] + mid - 1) / mid;  // ceil(nums[i] / mid)
        }

        if (sum <= threshold) {
            high = mid - 1;   // Try a smaller divisor
        } else {
            low = mid + 1;    // Need a larger divisor
        }
    }

    return low;
}