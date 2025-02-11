#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        
        unordered_set<int> zeroRows;
        unordered_set<int> zeroCols;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == 0) {
                    zeroRows.insert(i);  // Mark the row
                    zeroCols.insert(j);  // Mark the column
                }
            }
        }

    // Set the entire row and column to 0 if needed
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (zeroRows.count(i) > 0 || zeroCols.count(j) > 0) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
