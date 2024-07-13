class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        long long n = grid.size();
        long long totalElements = n * n;
        
        long long SN = (totalElements * (totalElements + 1)) / 2;
        long long S2N = (totalElements * (totalElements + 1) * (2 * totalElements + 1)) / 6;
        long long S = 0, S2 = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                S += grid[i][j];
                S2 += (long long)grid[i][j] * (long long)grid[i][j];
            }
        }

        long long val1 = S - SN;
        long long val2 = S2 - S2N;
        long long x = 0, y = 0;

        if (val1 != 0) {
            val2 = val2 / val1;
            x = (val1 + val2) / 2;
            y = x - val1;
        }

        return {int(x), int(y)};
    }
};
