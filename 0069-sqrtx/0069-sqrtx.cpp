class Solution {
public:
    int mySqrt(int x) {
        int ans=0;
        for(int i=1;i<=x;i++){
            if((long long)i*i==x){
                ans=i;
                return ans;
            }
            if((long long)i*i>x)
                return ans;
            ans=i;
        }
        return ans;
    }
};