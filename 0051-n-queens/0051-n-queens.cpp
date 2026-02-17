class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> results;
        vector<string> board(n, string(n, '.'));
        
        // מערכי עזר לסימון איומים ב-O(1)
        vector<bool> cols(n, false);
        vector<bool> diag1(2 * n, false); // אלכסון r-c
        vector<bool> diag2(2 * n, false); // אלכסון r+c
        
        backtrack(0, n, board, results, cols, diag1, diag2);
        return results;
    }

private:
    void backtrack(int row, int n, vector<string>& board, vector<vector<string>>& results,
                   vector<bool>& cols, vector<bool>& diag1, vector<bool>& diag2) {
        
        // אם הגענו לשורה האחרונה - מצאנו פתרון!
        if (row == n) {
            results.push_back(board);
            return;
        }

        for (int col = 0; col < n; col++) {
            // חישוב אינדקסים לאלכסונים
            int d1 = row - col + n; 
            int d2 = row + col;

            // בדיקה האם המיקום בטוח
            if (!cols[col] && !diag1[d1] && !diag2[d2]) {
                // הצבה
                board[row][col] = 'Q';
                cols[col] = diag1[d1] = diag2[d2] = true;

                // מעבר לשורה הבאה
                backtrack(row + 1, n, board, results, cols, diag1, diag2);

                // ביטול הצבה (Backtracking)
                board[row][col] = '.';
                cols[col] = diag1[d1] = diag2[d2] = false;
            }
        }
    }
};