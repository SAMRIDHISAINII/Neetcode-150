class Solution {
    vector<vector<string>> ans;
    vector<string> cur;
    vector<bool> col, dg, udg; // col: columns, dg: diagonal /, udg: diagonal \
    int n;
    void backtrack(int r) {
        if (r == n) {
            ans.push_back(cur);
            return;
        }
        for (int c = 0; c < n; c++) {
            if (col[c] || dg[r + c] || udg[r - c + n - 1]) continue;
            cur[r][c] = 'Q';
            col[c] = dg[r + c] = udg[r - c + n - 1] = true;
            backtrack(r + 1);
            col[c] = dg[r + c] = udg[r - c + n - 1] = false;
            cur[r][c] = '.';
        }
    }
public:
    vector<vector<string>> solveNQueens(int n) {
        this->n = n;
        cur = vector<string>(n, string(n, '.'));
        col = vector<bool>(n);
        dg = vector<bool>(2 * n);
        udg = vector<bool>(2 * n);
        backtrack(0);
        return ans;
    }
};


// The basic idea is to start with an empty chessboard and place a queen in the first row, first column. Then, move to the next column and place a queen in the first row if it is a valid move. If it is not a valid move, move to the next row and try again. If no valid move can be found in the current column, backtrack to the previous column and move the queen to the next row. Repeat this process until a solution is found or all possible solutions have been exhausted.
