/*
给定一幅由N × N矩阵表示的图像，其中每个
像素的大小为4字节，编写一种方法，将图像
旋转90度。
不占用额外内存空间能否做到？
示例 1:
给定 matrix = 
[
  [1,2,3],
  [4,5,6],
  [7,8,9]
],
原地旋转输入矩阵，使其变为:
[
  [7,4,1],
  [8,5,2],
  [9,6,3]
]
示例 2:
给定 matrix =
[
  [ 5, 1, 9,11],
  [ 2, 4, 8,10],
  [13, 3, 6, 7],
  [15,14,12,16]
], 
原地旋转输入矩阵，使其变为:
[
  [15,13, 2, 5],
  [14, 3, 4, 1],
  [12, 6, 8, 9],
  [16, 7,10,11]
]

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/rotate-matrix-lcci
*/
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        if(n < 2)
            return;
        
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < n / 2; ++j)
                swap(matrix[i][j], matrix[i][n - 1 - j]);
        }
        
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < n - 1 - i; ++j)
                swap(matrix[i][j], matrix[n - 1 - j][n - 1 - i]);
        }
    }
};