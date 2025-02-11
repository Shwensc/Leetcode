#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    //using 2d dynamic array
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size(); //no. of rows
        int n=matrix[0].size();
        //sets store rows and columns that need to be zeroed
        unordered_set<int> zeroRows;
        unordered_set<int> zeroColumns;

        //check which rows and columns need to be zeroed
        for(int i=0;i<m;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    //mark the row and column
                    zeroRows.insert(i);
                    zeroColumns.insert(j);
                }
            }
        }

        //set entire row and column to zero
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(zeroRows.count(i)>0 || zeroColumns.count(j)>0)
                //count method checks if element there, id there it retgurns 1. so >0 condition used
                matrix[i][j]=0;
            }
        }

       
    };
};
