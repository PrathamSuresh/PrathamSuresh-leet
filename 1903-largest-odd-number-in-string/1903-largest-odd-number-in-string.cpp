class Solution {
public:
    string largestOddNumber(string num) {
        string odd;
        string even;
        string ans;
        for (char c : num) {
            int n = c - '0';
            if (n % 2 == 0) {
                even += to_string(n);
            } else{
                odd+=to_string(n);
                ans+=even+odd;
                even="";
                odd="";
            }
        }
        return ans;
    }
};