class Solution {
public:
    string removeKdigits(string num, int k) {
        list<int> st;
        int s=num.size()-k;
        for (int i = 0; i < num.size(); i++) {
            int c=num[i]-'0';
            while(!st.empty() && st.back()>c && k>0){
                st.pop_back();
                k--;
            }
            st.push_back(c);
        }
        while(k>0){
            st.pop_back();
            k--;
        }
        string ans="";
        for(int x:st){
            ans+=to_string(x);
        }
        int i=0;
        while(i<ans.size() && ans[i]=='0'){
            i++;
        }
        ans=ans.substr(i);
        return ans.empty()? "0":ans;
    }
};