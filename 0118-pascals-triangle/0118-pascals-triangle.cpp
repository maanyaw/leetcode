class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for (int row = 1; row <= numRows; row++) {
            ans.push_back(generateRow(row));
        }
        return ans;
    }
    
    vector<int> generateRow(int row) {
        vector<int> ansRow;
        ansRow.push_back(1); 

        if (row == 1) {
            return ansRow;
        }

        vector<int> prevRow = generateRow(row - 1);
        for (int col = 1; col < row - 1; col++) {
            ansRow.push_back(prevRow[col - 1] + prevRow[col]);
        }
        ansRow.push_back(1);
        return ansRow;
    }
};