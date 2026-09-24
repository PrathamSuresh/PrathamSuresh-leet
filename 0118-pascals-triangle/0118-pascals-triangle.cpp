class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> results(numRows);
        for (int i = 0; i < numRows; i++) {
            results[i] = vector<int>(i + 1, 1);
            for (int j = 1; j < i; j++) {
                results[i][j] = results[i - 1][j] + results[i - 1][j - 1];
            }
        }
        return results;
    }
};