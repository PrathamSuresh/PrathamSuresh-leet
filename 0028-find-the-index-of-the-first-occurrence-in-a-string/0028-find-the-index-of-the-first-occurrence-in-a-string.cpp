class Solution {
public:
    int strStr(string haystack, string needle) {
        int ans=-1;;
        for(int i=0;i<haystack.size();i++){
            int count=0;
            for(int j=0;j<needle.size();j++){
                if(needle[j]==haystack[i+j]){
                    if(count==0){
                        ans=i;
                    }
                    count++;
                    if(count==needle.size()){
                        return ans;
                    }
                }else{
                    break;
                }
            }
        }
        return -1;
    }
};