/*
54. 螺旋矩阵
给定一个包含 m x n 个元素的矩阵（m 行, n 列），请按照顺时针螺旋顺序，返回矩阵中的所有元素。

示例 1:

输入:
[
 [ 1, 2, 3 ],
 [ 4, 5, 6 ],
 [ 7, 8, 9 ]
]
输出: [1,2,3,6,9,8,7,4,5]
示例 2:

输入:
[
  [1, 2, 3, 4],
  [5, 6, 7, 8],
  [9,10,11,12]
]
输出: [1,2,3,4,8,12,11,10,9,5,6,7]

来源：LeetCode
链接：https://leetcode-cn.com/problems/spiral-matrix/
*/
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        if(matrix.empty())
            return res;
        
        int x1 = 0, y1 = 0, x2 = matrix.size() - 1, y2 = matrix[0].size() - 1;
        while(x1 <= x2 && y1 <= y2)
        {
            for(int i = y1; i <= y2; ++i)
                res.push_back(matrix[x1][i]);
            for(int i = x1 + 1; i < x2; ++i)
                res.push_back(matrix[i][y2]);
            for(int i = y2; i >= y1 && x1 < x2; --i)
                res.push_back(matrix[x2][i]);
            for(int i = x2 - 1; i > x1 && y1 < y2; --i)
                res.push_back(matrix[i][y1]);
            ++x1;
            ++y1;
            --x2;
            --y2;
        }
        
        return res;
    }
};