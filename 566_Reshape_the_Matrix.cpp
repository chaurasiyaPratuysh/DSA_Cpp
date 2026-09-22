class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int row = mat.size();
        int col = mat[0].size();
        int total = row * col;

        if(r * c != total) {
            return mat;
        }

        vector<vector<int>> result(r, vector<int>(c, 0));

        for(int i = 0; i < total; i++) {
            result[i / c][i % c] = mat[i / col][i % col];
        }

        return result;
    }
};
