int maxSpeed(int *piles, int pilesSize){
    int max=0;
    for(int i=0;i<pilesSize;i++){
        if(piles[i]>max){
            max=piles[i];
        }
    }
    return max;
}

long long hours(int *piles,int pilesSize,int speed){
    long long ans=0;
    for(int i=0;i<pilesSize;i++){
        ans+=((long long)piles[i]+speed-1)/speed;
    }
    return ans;
}

int minEatingSpeed(int* piles, int pilesSize, int h) {
    int max=maxSpeed(piles,pilesSize);
    int left=1;
    int right=max;
    int ans=max;
    int mid=left;
    while(left<=right){
        mid=(left+right)/2;
        long long minHours=hours(piles,pilesSize,mid);
            if(minHours<=h){
                ans=mid;
                right=mid-1;
            }else{
                left=mid+1;
            }
    }
    return ans;
}