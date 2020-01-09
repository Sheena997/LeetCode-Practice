/*
给定一个非负索引 k，其中 k ≤ 33，返回杨辉三角的第 k 行。
在杨辉三角中，每个数是它左上方和右上方的数的和。
示例:
输入: 3
输出: [1,3,3,1]
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/pascals-triangle-ii
*/
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> v(rowIndex + 1, vector<int>(rowIndex + 1, 0));
        v[0][0] = 1;
        for(int i = 1; i < v.size(); ++i)
        {
            v[i][0] = v[i][v[i].size() - 1] = 1;
            for(int j = 1; j < v[i].size() - 1; ++j)
            {
                v[i][j] = v[i - 1][j] + v[i - 1][j - 1];
            }
        }
        
        vector<int> res(v[rowIndex].size(), 0);
        for(int j = 0; j < v[rowIndex].size(); ++j)
        {
            res[j] = v[rowIndex][j];
        }
        return res;
    }
};




