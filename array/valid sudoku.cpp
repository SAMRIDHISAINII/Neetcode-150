class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        if (board.empty() || board.size() != 9 || board[0].size() != 9) {
			return false;
		}
		vector<unordered_set<char>> row(9, unordered_set<char>());
		vector<unordered_set<char>> col(9, unordered_set<char>());
		vector<unordered_set<char>> blo(9, unordered_set<char>());
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {
				char c = board[i][j];
				if (c == '.') {
					continue;
				}
				int blo_n = i / 3 * 3 + j / 3;
				if (row[i].count(c) || col[j].count(c) || blo[blo_n].count(c)) {
					return false;
				}
				else {
					row[i].insert(c);
					col[j].insert(c);
					blo[blo_n].insert(c);
				}
			}
		}
		return true;
        
    }
};
