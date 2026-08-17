class Solution {
public:
    string frequencySort(string s) {
        string ans="";
        unordered_map<char, int> checker;
        for(char c : s){
            checker[c]++;
        }

        for(int i=1;i<=s.size();i++){
            for(auto x : checker){
                if(x.second==i){
                    for(int i=0;i<x.second;i++){
                        ans+=x.first;
                    }
                }
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};