class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) 
    {
        int row[9] = {0};
        int col[9] = {0};
        int sqr[9] = {0};

        for(int i = 0; i < 9; i++)
        {
            for(int j = 0; j < 9; j++)
            {
                if(board[i][j] == '.')continue;
                int x = board[i][j] - '1';
                int mask = 1 << x;
                int box = (i/3)*3 + j/3;

                if((row[i]&mask) || (col[j]&mask) || (sqr[box]&mask)) return false;
                row[i] |= mask; 
                col[j] |= mask; 
                sqr[box] |= mask;
            }
        }

        return true;
    }
};