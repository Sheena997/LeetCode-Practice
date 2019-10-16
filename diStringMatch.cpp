/*
给定只含"I"（增大）或 "D"（减小）的字符串S，令N = S.length。

返回[0, 1, ..., N]的任意排列A使得对于所有i = 0,?..., N-1，都有：

如果S[i] == "I"，那么A[i] < A[i+1]
如果S[i] == "D"，那么A[i] > A[i+1]

示例 1：

输出："IDID"
输出：[0,4,1,3,2]

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/di-string-match
增减字符串匹配
*/

class Solution {
public:
    vector<int> diStringMatch(string S) {
        vector<int> res(S.size() + 1, 0);
        int min = 0, max = S.size();
        for(int i = 0; i < S.size(); ++i)
        {
            if(S[i] == 'I')
                res[i] = min++;
            else if(S[i] == 'D')
            {
                res[i] = max--;
            }
        }
        res[S.size()] = min;
        return res;
    }
};




/*
给定一个包含 0 和 1 的二维网格地图，其中 1 表示陆地?0 表示水域。

网格中的格子水平和垂直方向相连（对角线方向不相连）。整个网格被水完全包围，但其中恰好有一个岛屿（或者说，一个或多个表示陆地的格子相连组成的岛屿）。

岛屿中没有“湖”（“湖” 指水域在岛屿内部且不和岛屿周围的水相连）。格子是边长为 1 的正方形。网格为长方形，且宽度和高度均不超过 100 。计算这个岛屿的周长。

?

示例 :

输入:
[[0,1,0,0],
 [1,1,1,0],
 [0,1,0,0],
 [1,1,0,0]]

输出: 16

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/island-perimeter
*/
/*
直接遍历数组，只要前面有相邻的方格，就-2
*/
class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int peri = 0;
        for(int i = 0; i < grid.size(); ++i)
        {
            for(int j = 0; j < grid[i].size(); ++j)
            {
                if(grid[i][j] == 1)
                {
                    peri += 4;
                    if(i > 0 && grid[i-1][j] == 1)
                        peri -= 2;
                    if(j > 0 && grid[i][j-1] == 1)
                        peri -= 2;
                }
            }
        }
        return peri;
    }
};
