class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row=matrix.size();
        int col=matrix[0].size();

        for(int i = 0; i <row; i++) {
            int mini = *min_element(matrix[i].begin(), matrix[i].end());

            for(int j = 0; j <col; j++) {
                if(matrix[i][j] == mini) {
                    int maxi = INT_MIN;

                    for(int k = 0; k <row; k++)
                        maxi = max(maxi, matrix[k][j]);

                    if(mini == maxi)
                        ans.push_back(mini);
                }
            }
        }

        return ans;
    }
};
