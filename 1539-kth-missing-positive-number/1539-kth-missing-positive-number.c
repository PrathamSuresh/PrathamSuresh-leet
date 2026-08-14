int findKthPositive(int* arr, int arrSize, int k) {
    int ans=0;
    int final=0;
    int r=0;
    for(int i=0;i<arrSize;i++){
        ans=arr[i]-(i+1);
        if(ans>=k){
            r=k+i;
            return r;
        }else if(ans<=k){
            final=k-ans;
            r=arr[i]+final;
        }
    }
    return r;
}