int shipWithinDays(int* weights, int weightsSize, int days) {
    int low = 0;
    int high = 0;

    // Minimum capacity = heaviest package
    // Maximum capacity = sum of all packages
    for (int i = 0; i < weightsSize; i++) {
        if (weights[i] > low)
            low = weights[i];

        high += weights[i];
    }

    while (low <= high) {
        int mid = low + (high - low) / 2;

        int currentWeight = 0;
        int requiredDays = 1;

        for (int i = 0; i < weightsSize; i++) {
            if (currentWeight + weights[i] <= mid) {
                currentWeight += weights[i];
            } else {
                requiredDays++;
                currentWeight = weights[i];
            }
        }

        if (requiredDays <= days) {
            // This capacity works.
            // Try to find a smaller one.
            high = mid - 1;
        } else {
            // Capacity is too small.
            low = mid + 1;
        }
    }

    return low;
}