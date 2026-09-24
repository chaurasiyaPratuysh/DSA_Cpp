class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n, vector<int>(n));
        int count = 1;
        int total = n * n;
        int startRow = 0;
        int endRow = n - 1;
        int startCol = 0;
        int endCol = n - 1;

        while (count <= total) {

            for (int index = startCol;
                 count <= total && index <= endCol;
                 index++) {
                matrix[startRow][index] = count;
                count++;
            }
            startRow++;

            for (int index = startRow;
                 count <= total && index <= endRow;
                 index++) {
                matrix[index][endCol] = count;
                count++;
            }
            endCol--;

            for (int index = endCol;
                 count <= total && index >= startCol;
                 index--) {
                matrix[endRow][index] = count;
                count++;
            }
            endRow--;

            for (int index = endRow;
                 count <= total && index >= startRow;
                 index--) {
                matrix[index][startCol] = count;
                count++;
            }
            startCol++;
        }

        return matrix;
    }
};
