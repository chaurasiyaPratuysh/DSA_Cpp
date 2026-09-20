class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        vector<vector<int>> ans(cols, vector<int>(rows));

        for (int row = 0; row < rows; row++) {
            for (int col = 0; col < cols; col++) {
                ans[col][row] = matrix[row][col];
            }
        }

        return ans;
    }
};
