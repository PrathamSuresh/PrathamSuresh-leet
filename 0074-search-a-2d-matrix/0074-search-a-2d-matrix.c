bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) {
    int left=0;
    int right=matrixSize*matrixColSize[0]-1;
    int mid;
    while(left<=right){
        mid=(left+right)/2;
        int row=mid/matrixColSize[0];
        int column=mid%matrixColSize[0];
        if(matrix[row][column]==target){
            return true;
        }else if(matrix[row][column]<target){
            left=mid+1;
        }else{
            right=mid-1;
        }
    }
    return false;
}