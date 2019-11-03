/*
三角形的最大周长
给定由一些正数（代表长度）组成的数组 A，返回由其中三个长度组成的、面积不为零的三角形的最大周长。

如果不能形成任何面积不为零的三角形，返回?0。
示例 1：
输入：[3,2,3,4]
输出：10
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/largest-perimeter-triangle
*/
class Solution {
public:
    int largestPerimeter(vector<int>& A) {
        sort(A.begin(), A.end());
        int max = 0;
        int d = 0;
        for(int i = A.size() - 1; i >= 0; --i)
        {
            if((i - 2) >= 0)
            {
                int a = A[i - 2];
                int b = A[i - 1];
                int c = A[i];
                if((b - a < c) && (a + b > c))
                    d = a + b + c;
                if(max < d)
                    max = d;
            }
        }
        return max;
    }
};
