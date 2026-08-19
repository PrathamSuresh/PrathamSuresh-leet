class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        string ans="";
        for(int i=0;i<s.size();i++){
            int count=0;
            int start=i;
            while(i<s.size() && s[i]!=' '){
                count++;
                i++;
            }
            string temp=s.substr(start,count);
            reverse(temp.begin(),temp.end());
            if(temp.size()>0){
                ans+=" "+temp;
            }
        }
        string final=ans.substr(1);
        return final;
    }
};