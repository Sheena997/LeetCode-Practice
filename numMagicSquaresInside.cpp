/*
840. 矩阵中的幻方
3 x 3 的幻方是一个填充有从 1 到 9 的不同数字的 3 x 3 矩阵，
其中每行，每列以及两条对角线上的各数之和都相等。
给定一个由整数组成的 grid，其中有多少个 3 × 3 的 “幻方” 子矩阵？（每个子矩阵都是连续的）。
示例：
输入: [[4,3,8,4],
      [9,5,1,9],
      [2,7,6,2]]
输出: 1
解释: 
下面的子矩阵是一个 3 x 3 的幻方：
438
951
276
而这一个不是：
384
519
762
总的来说，在本示例所给定的矩阵中只有一个 3 x 3 的幻方子矩阵。
提示:
1 <= grid.length <= 10
1 <= grid[0].length <= 10
0 <= grid[i][j] <= 15

来源:LeetCode
链接：https://leetcode-cn.com/problems/magic-squares-in-grid/
*/
class Solution {
public:
    bool magicSquaresInside(int a, int b, int c, int x, int y, int z, int m, int n, int l)
    {
        if(a > 0 && a < 10 && b > 0 && b < 10 && c > 0 && c < 10
        && x > 0 && x < 10 && y > 0 && y < 10 && z > 0 && z < 10
        && m > 0 && m < 10 && n > 0 && n < 10 && l > 0 && l < 10
        && a != b && b != c && c != x && x != y && y != z && z != m && m != n && n != l
        && a + b + c == 15 && x + y + z == 15 && m + n + l == 15
        && a + x + m == 15 && b + y + n == 15 && c + z + l == 15
        && a + y + l == 15 && c + y + m == 15)
            return true;
        return false;
    }
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int res = 0;
        if(grid.size() < 3 || grid[0].size() < 3)
            return 0;
        for(int i = 1; i < grid.size() - 1; ++i)
        {
            for(int j = 1; j < grid[0].size() - 1; ++j)
            {
                if(grid[i][j] != 5)
                    continue;
                if(magicSquaresInside(grid[i - 1][j - 1], grid[i - 1][j], grid[i - 1][j + 1],
                                      grid[i][j - 1], grid[i][j], grid[i][j + 1],
                                      grid[i + 1][j - 1], grid[i + 1][j], grid[i + 1][j + 1]))
                    ++res;
                    
            }
        }
        
        return res;
    }
};
