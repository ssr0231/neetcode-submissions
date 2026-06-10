class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int m=board.size();
        int n=board[0].size();
        unordered_map<int,int> freq;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]!='.'){
                    freq[board[i][j]]++;
                }
            }
            for(auto it:freq){
                if(it.second>1) return false;
            }
            freq.clear();
        }

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[j][i]!='.'){
                    freq[board[j][i]]++;
                }
            }
            for(auto it:freq){
                if(it.second>1) return false;
            }
            freq.clear();
        }

         for(int row = 0; row < 9; row += 3) {
            for(int col = 0; col < 9; col += 3) {

                freq.clear();

                for(int i = row; i < row + 3; i++) {
                    for(int j = col; j < col + 3; j++) {

                        if(board[i][j] != '.') {
                            freq[board[i][j]]++;

                            if(freq[board[i][j]] > 1)
                                return false;
                        }
                    }
                }
            }
        }
        return true;

        
    }
};
