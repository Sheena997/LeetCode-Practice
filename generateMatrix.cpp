/*
59. 螺旋矩阵 II
给定一个正整数 n，生成一个包含 1 到 n2 所有元素，且元素按顺时针顺序螺旋排列的正方形矩阵。
示例:
输入: 3
输出:
[
 [ 1, 2, 3 ],
 [ 8, 9, 4 ],
 [ 7, 6, 5 ]
]

来源：LeetCode
链接：https://leetcode-cn.com/problems/spiral-matrix-ii/
*/
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res(n, vector<int>(n, 0));
        
        int ret = 1;
        int x1 = 0, x2 = n - 1, y1 = 0, y2 = n - 1;
        while(x1 <= x2 && y1 <= y2)
        {
            for(int i = y1; i <= y2; ++i)
                res[x1][i] = ret++;
            for(int i = x1 + 1; i < x2; ++i)
                res[i][y2] = ret++;
            for(int i = y2; i >= y1 && x1 < x2; --i)
                res[x2][i] = ret++;
            for(int i = x2 - 1; i > x1 && y1 < y2; --i)
                res[i][y1] = ret++;
            ++x1;
            --x2;
            ++y1;
            --y2;
        }
        
        return res;
    }
};