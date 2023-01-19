class Solution {
public:
   
   int m, n;
    vector<vector<int>> dirs;
    
    bool dfs(vector<vector<char>>& board, string& word, int ci, int cj, int cix){
        if(cix == word.size()){
            return true;
        }else if(ci < 0 || ci >= m || cj < 0 || cj >= n){
            return false;
        }else if(board[ci][cj] != word[cix]){
            return false;
        }else{
            // cout << "equal, " << cix << " : [" << ci << ", " << cj << "]: " << board[ci][cj] << endl;
            //mark as visited
            // cout << board[ci][cj] << " = " << (int)(board[ci][cj]) << ", 256-x: " << 256 - board[ci][cj] << ", x^256: " << (board[ci][cj]^256) << endl;
            /*
            // char c = 256^board[ci][cj];
            // cout << "x == x^256? " << (board[ci][cj] == c) << endl;
            the above statements evaluate to true,
            so we cannot use:
            // board[ci][cj] = 256^board[ci][cj];
            in C++!!
            */
            //work
            // board[ci][cj] = 256 - board[ci][cj];
            //work
            board[ci][cj] = '*';
            for(vector<int>& dir : dirs){
                int ni = ci + dir[0];
                int nj = cj + dir[1];
                if(dfs(board, word, ni, nj, cix+1)) return true;
            }
            //not work
            // board[ci][cj] = 256^board[ci][cj];
            //work
            // board[ci][cj] = 256 - board[ci][cj];
            //work
            board[ci][cj] = word[cix];
            return false;
        }
    };
    
    bool exist(vector<vector<char>>& board, string word) {
        m = board.size();
        if(m == 0) return false;
        n = board[0].size();
        if(n == 0) return false;
        
        dirs = {{0,1},{0,-1},{1,0},{-1,0}};
        
        for(int i = 0; i < m; ++i){
            for(int j = 0; j < n; ++j){
                if(dfs(board, word, i, j, 0)) return true;
            }
        }
        
        return false;
    }
};
