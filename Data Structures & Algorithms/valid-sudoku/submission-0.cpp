class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //unordered_map<int, int> rows;
        //unordered_map<int, int> cols;
        unordered_map<string, int> box;

        for(int i = 0; i < 9; i++){
            for(int j =0; j < 9; j++){
                char num = board[i][j];
                if (num == '.') continue;
                //if(rows[board[i][j]]++ > 0){
                    //return false;
                //}
                //if(cols[board[i][j]]++ > 0){
                    //return false;
                //}
                int box_index = (i / 3) * 3 + (j / 3);
                string box_key = string(1, num) + " in box " + to_string(box_index);
                string row_key = string(1, num) + " in row " + to_string(i);
                string col_key = string(1, num) + " in col " + to_string(j);
                if(box[box_key]++ > 0 || box[row_key]++ > 0 || box[col_key]++ > 0){
                    return false;
                }
            }
            
        }

        return true;
        
    }
};
