/*question : https://leetcode.com/problems/toeplitz-matrix/*/

class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& m) {
        int r=m.size(); int c=m[0].size();
     for(int i=0;i<r-1;i++){
         for(int j=0;j<c-1;j++){
           if(m[i][j]!=m[i+1][j+1])
               return false;
         }
     }
    return true;
    }
};