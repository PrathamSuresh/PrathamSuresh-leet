int leftFinder(int *weights, int weightsSize){
    int max=0;
    for(int i=0;i<weightsSize;i++){
        if(weights[i]>max){
            max=weights[i];
        }
    }
    return max;
}

int rightFinder(int *weights, int weightsSize){
    int sum=0;
    for(int i=0;i<weightsSize;i++){
        sum+=weights[i];
    }
    return sum;
}

int DayFinder(int *weights,int weightsSize, int mid){
    int ans=0;
    int days=1;
    for(int i=0;i<weightsSize;i++){
        if(ans+weights[i]<=mid){
            ans+=weights[i];
        }else{
            days++;
            ans=weights[i];
        }
    }
    return days;
}

int shipWithinDays(int* weights, int weightsSize, int days) {
    int left=leftFinder(weights,weightsSize);
    int right=rightFinder(weights,weightsSize);
    int mid;
    int check;
    int ans=0;
    while(left<=right){
        mid=(left+right)/2;
        check=DayFinder(weights,weightsSize,mid);
        if(check<=days){
            ans=mid;
            right=mid-1;
        }else{
            left=mid+1;
        }

    }
    return ans;
}