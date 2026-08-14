

bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target){
    int row=0;
    int column=matrixColSize[0]-1;
    while(row<matrixSize && column>=0){
        if(matrix[row][column]==target){
            return true;
        }else if(matrix[row][column]>target){
            column--;
        }else{
            row++;
        }
    }
    return false;
}