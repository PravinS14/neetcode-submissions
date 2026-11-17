class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int size = matrix.size();
        int rl = matrix[0].size()-1;
        int row = -1;
        bool found = false;
        for(int i = 0; i < size; ++i){
            if(target <= matrix[i][rl] ){
                row = i;
                break;
            }
        }
        if(row == -1){
            found = false;
            return found;
        }
        else{
            int l = 0;
            int r = matrix[row].size()-1;
            while(l <= r){
                int mid = l + (r-l)/2;
                if(matrix[row][mid] == target){
                    found = true;
                    return found;
                }
                else if(matrix[row][mid] < target){
                    l = mid+1;
                }
                else{
                    r = mid-1;
                }

            }
        }
        return found;
    }
};
