class Solution {
public:
    int myAtoi(string s) {

        int i = 0;

        // 1. Skip leading spaces
        while(i < s.size() && s[i] == ' ') {
            i++;
        }

        // 2. Determine sign
        int sign = 1;

        if(i < s.size() && s[i] == '-') {
            sign = -1;
            i++;
        }
        else if(i < s.size() && s[i] == '+') {
            i++;
        }

        // 3. Build the number
        long long ans = 0;

        while(i < s.size() && isdigit(s[i])) {

            int digit = s[i] - '0';

            ans = ans * 10 + digit;

            // 4. Check overflow
            if(sign == 1 && ans > INT_MAX) {
                return INT_MAX;
            }

            if(sign == -1 && -ans < INT_MIN) {
                return INT_MIN;
            }

            i++;
        }

        return ans * sign;
    }
};