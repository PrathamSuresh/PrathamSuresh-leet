class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>mp1;
        unordered_map<char,char>mp2;
        if(s.size()!=t.size()){
            return false;
        }
        for(int i=0;i<s.size();i++){
            char char1=s[i];
            char char2=t[i];

            if(mp1.count(char1)){
               if(mp1[char1]!=char2){
                return false;
               }
            }else{
                mp1[char1]=char2;
            }

            if(mp2.count(char2)){
                if(mp2[char2]!=char1){
                    return false;
                }
            }else{
                mp2[char2]=char1;
            }
        }
        return true;
    }
};