int maxProfit(int* prices, int pricesSize) {
    int minimum=prices[0];
    int maxProfit=0;
    for(int i=1;i<pricesSize;i++){
        int Prof=prices[i]-minimum;
        if(Prof>maxProfit){
            maxProfit=Prof;
        }
        if(prices[i]<minimum){
            minimum=prices[i];
        }
    }
    return maxProfit;
}