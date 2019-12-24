/*
给定包含多个点的集合，从其中取三个点组成三角形，返回能组成的最大三角形的面积。
示例:
输入: points = [[0,0],[0,1],[1,0],[0,2],[2,0]]
输出: 2
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/largest-triangle-area
*/
class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        //已知三点求三角形面积可以用矩阵求化简公式得 S=(x1y2+x2y3+x3y1-x1y3-x2y1-x3y2) /2;
        double res = 0;
        for(int i = 0; i < points.size(); ++i)
        {
            for(int j = i + 1; j < points.size(); ++j)
            {
                for(int k = j + 1; k < points.size(); ++k)
                {
                    int x1 = points[i][0], y1 = points[i][1];
                    int x2 = points[j][0], y2 = points[j][1];
                    int x3 = points[k][0], y3 = points[k][1];
                    double ret = 0.5 * abs(x1 * y2 + x2 * y3 + x3 * y1 - y1 * x2 - y2 * x3 - y3 * x1);
                    if(ret > res)
                        res = ret;
                }
            }
        }
        
        return res;
    }
};