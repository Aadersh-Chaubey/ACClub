class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // reverse the matrix
        reverse(matrix.begin(), matrix.end());
        //transpose the matrix
        for(int i = 0; i < matrix.size(); i++){
            for(int j = i; j < matrix.size(); j++){
                int t = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = t;
            }
        }
    }
};