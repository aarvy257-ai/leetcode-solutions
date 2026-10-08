class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> result;
        vector<string> board(n, string(n, '.')); // initialize empty board
        vector<int> cols(n, 0), diag1(2*n, 0), diag2(2*n, 0); 
        // cols -> column check
        // diag1 -> (row+col) diagonal
        // diag2 -> (row-col+n) diagonal

        backtrack(0, n, board, result, cols, diag1, diag2);
        return result;
    }

private:
    void backtrack(int row, int n, vector<string>& board, 
                   vector<vector<string>>& result,
                   vector<int>& cols, vector<int>& diag1, vector<int>& diag2) {
        if (row == n) {
            result.push_back(board); // found valid solution
            return;
        }
        for (int col = 0; col < n; col++) {
            if (cols[col] || diag1[row+col] || diag2[row-col+n]) continue;
            // place queen
            board[row][col] = 'Q';
            cols[col] = diag1[row+col] = diag2[row-col+n] = 1;

            backtrack(row+1, n, board, result, cols, diag1, diag2);

            // remove queen (backtrack)
            board[row][col] = '.';
            cols[col] = diag1[row+col] = diag2[row-col+n] = 0;
        }
    }
};