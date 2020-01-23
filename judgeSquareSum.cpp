/*
给定一个非负整数 c ，你要判断是否存在两个整数 a 和 b，使得 a2 + b2 = c。
示例1:
输入: 5
输出: True
解释: 1 * 1 + 2 * 2 = 5
示例2:
输入: 3
输出: False
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/sum-of-square-numbers
*/
class Solution {
public:
    bool judgeSquareSum(int c) {
        long long i = 0, j = sqrt(c);
        while(i <= j)
        {
            if(i * i + j * j > c)
                --j;
            else if(i * i + j * j < c)
                ++i;
            else
                return true;
        }
        
        return false;
    }
};