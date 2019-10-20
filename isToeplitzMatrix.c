/*
如果一个矩阵的每一方向由左上到右下的对角线上具有相同元素，那么这个矩阵是托普利茨矩阵。

给定一个?M x N?的矩阵，当且仅当它是托普利茨矩阵时返回?True。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/toeplitz-matrix

*/

class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        for(int i = 0; i < matrix.size(); ++i)
        {
            for(int j = 0; j < matrix[i].size(); ++j)
            {
               if(i + 1 < matrix.size() && j + 1 < matrix[i].size())
               {
                   if(matrix[i][j] != matrix[i+1][j+1])
                        return false;
               }
            }
        }
        return true;
    }
};