int* findPeakGrid(int** mat, int matSize, int* matColSize, int* returnSize) {

    int m = matSize;
    int n = matColSize[0];

    int low = 0;
    int high = n - 1;

    while (low <= high) {

        int mid = low + (high - low) / 2;

        // Find maximum element in middle column

        int maxRow = 0;

        for (int i = 0; i < m; i++) {
            if (mat[i][mid] > mat[maxRow][mid]) {
                maxRow = i;
            }
        }

        // Get left and right neighbours

        int left = (mid > 0) ? mat[maxRow][mid - 1] : -1;

        int right = (mid < n - 1) ? mat[maxRow][mid + 1] : -1;

        // Check if peak is found

        if (mat[maxRow][mid] > left &&
            mat[maxRow][mid] > right) {

            int* ans = (int*)malloc(2 * sizeof(int));

            ans[0] = maxRow;
            ans[1] = mid;

            *returnSize = 2;

            return ans;
        }

        // Move left

        else if (left > mat[maxRow][mid]) {
            high = mid - 1;
        }

        // Move right

        else {
            low = mid + 1;
        }
    }

    *returnSize = 0;
    return NULL;
}