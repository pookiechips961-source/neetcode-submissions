class NumMatrix {
    vector<vector<int>> mat;
public:
    NumMatrix(vector<vector<int>>& matrix) 
    {
        int m = matrix.size();
        int n = matrix[0].size();

        mat = vector<vector<int>> (m+1, vector<int>(n+1, 0));

        for (int r = 0; r < m; ++r) 
        {
            for (int c = 0; c < n; ++c) 
            {
                mat[r + 1][c + 1] = matrix[r][c] 
                                   + mat[r][c + 1] 
                                   + mat[r + 1][c] 
                                   - mat[r][c];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) 
    {
        return mat[row2 + 1][col2 + 1] 
             - mat[row1][col2 + 1] 
             - mat[row2 + 1][col1] 
             + mat[row1][col1];
    }
};
