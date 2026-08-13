int maxDays(int *bloomDay, int bloomDaySize){
    int max=0;
    for(int i=0;i<bloomDaySize;i++){
        if(bloomDay[i]>max){
            max=bloomDay[i];
        }
    }
    return max;
}

int maxFlowers(int *bloomDay, int bloomDaySize, int m, int k, int mid){
    int adj=0;
    int bouquet=0;
    for(int i=0;i<bloomDaySize;i++){
        if(bloomDay[i]<=mid){
            adj++;
            if(adj==k){
                bouquet++;
                adj=0;
            }
        }else{
            adj=0;
        }
    }
    return bouquet;
}

int minDays(int* bloomDay, int bloomDaySize, int m, int k){
    int max=maxDays(bloomDay, bloomDaySize);
    int left=1;
    int right=max;
    int ans=-1;
    while(left<=right){
        int mid=(left+right)/2;
        int check=maxFlowers(bloomDay, bloomDaySize, m, k, mid);
        if(check>=m){
            ans=mid;
            right=mid-1;
        }else{
            left=mid+1;
        }
    }
    return ans;
}