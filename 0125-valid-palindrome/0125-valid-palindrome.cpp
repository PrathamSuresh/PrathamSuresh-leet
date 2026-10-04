class Solution {
public:
    bool isPalindrome(string s) {
        string ans="";
        for(int i=0;i<s.size();i++){
            if(s[i]>='a' && s[i]<='z'){
                ans+=s[i];
            }
            else if(s[i]>='A' && s[i]<='Z'){
                ans+=s[i]+32;
            }else if(s[i]>='0' && s[i]<='9'){
                ans+=s[i];
            }
        }
        string rev="";
        for(int i=ans.size()-1;i>=0;i--){
            rev+=ans[i];
        }
        if(ans==rev){
            return true;
        }else{
            return false;
        }
    }
};