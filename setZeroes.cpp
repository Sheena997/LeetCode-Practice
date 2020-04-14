/*
面试题 01.08. 零矩阵
编写一种算法，若M × N矩阵中某个元素为0，则将其所在的行与列清零。
示例 1：
输入：
[
  [1,1,1],
  [1,0,1],
  [1,1,1]
]
输出：
[
  [1,0,1],
  [0,0,0],
  [1,0,1]
]
示例 2：
输入：
[
  [0,1,2,0],
  [3,4,5,2],
  [1,3,1,5]
]
输出：
[
  [0,0,0,0],
  [0,4,5,0],
  [0,3,1,0]
]

来源：LeetCode
链接：https://leetcode-cn.com/problems/zero-matrix-lcci/
*/
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>> vv(matrix);
        for(int i = 0; i < matrix.size(); ++i)
        {
            for(int j = 0; j < matrix[0].size(); ++j)
            {
                if(vv[i][j] == 0)
                {
                    int x1 = i; 
                    int x2 = i;
                    int y1 = j;
                    int y2 = j;
                    while(x1 - 1 >= 0)
                        matrix[--x1][j] = 0;
                    while(x2 + 1 < matrix.size())
                        matrix[++x2][j] = 0;
                    while(y1 - 1 >= 0)
                        matrix[i][--y1] = 0;
                    while(y2 + 1 < matrix[0].size())
                        matrix[i][++y2] = 0;
                }
            }
        }
    }
};