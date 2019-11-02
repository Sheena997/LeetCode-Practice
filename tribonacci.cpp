/*
第 N 个泰波那契数
泰波那契序列?Tn?定义如下：?
T0 = 0, T1 = 1, T2 = 1, 且在 n >= 0?的条件下 Tn+3 = Tn + Tn+1 + Tn+2

给你整数?n，请返回第 n 个泰波那契数?Tn 的值。
示例 1：
输入：n = 4
输出：4
解释：
T_3 = 0 + 1 + 1 = 2
T_4 = 1 + 1 + 2 = 4

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/n-th-tribonacci-number
*/
//非递归
class Solution {
public:
    int tribonacci(int n) {
        if(n == 0 || n == 1 || n == 2)
            return n == 0 ? 0 : 1;
        int n1= 0 , n2 = 1, n3 = 1;
        for(int i = 3; i <= n; ++i)
        {
            int tmp = n1 + n2 + n3;
            n1 = n2;
            n2 = n3;
            n3 = tmp;
        }
        return n3;
    }
};
//递归 不可以
class Solution {
public:
    int tribonacci(int n) {
        if(n == 0 || n == 1 || n == 2)
            return n == 0 ? 0 : 1;
        return tribonacci(n - 3) + tribonacci(n -2) + tribonacci(n - 1);
    }
};


