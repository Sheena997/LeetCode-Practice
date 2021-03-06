/*
给定一个初始元素全部为 0，大小为 m*n 的矩阵 M 以及在 M 上的一系列更新操作。
操作用二维数组表示，其中的每个操作用一个含有两个正整数 a 和 b 的数组表示，含义是将所有符合 0 <= i < a 以及 0 <= j < b 的元素 M[i][j] 的值都增加 1。
在执行给定的一系列操作后，你需要返回矩阵中含有最大整数的元素个数。
示例 1:
输入: 
m = 3, n = 3
operations = [[2,2],[3,3]]
输出: 4
解释: 
初始状态, M = 
[[0, 0, 0],
 [0, 0, 0],
 [0, 0, 0]]
执行完操作 [2,2] 后, M = 
[[1, 1, 0],
 [1, 1, 0],
 [0, 0, 0]]
执行完操作 [3,3] 后, M = 
[[2, 2, 1],
 [2, 2, 1],
 [1, 1, 1]]
M 中最大的整数是 2, 而且 M 中有4个值为2的元素。因此返回 4。
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/range-addition-ii
*/
//每次操作都是左上角区域从（0, 0）到（a, b）的矩形，
//必定重叠，所以找最小的a乘最小的b就行
class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        if(m == 0 || n == 0)
            return 0;
        if(ops.empty())
            return m * n;
        int min_row = m;
        int min_col = n;
        int sum = 0;
        for(int i = 0; i < ops.size(); ++i)
        {
            if(ops[i][0] < min_row)
                min_row = ops[i][0];
            if(ops[i][1] < min_col)
                min_col = ops[i][1];
        }
        return min_row * min_col;
    }
};