/*
对于一个 正整数，如果它和除了它自身以外的所有正因子之和相等，我们称它为“完美数”。
给定一个 整数 n， 如果他是完美数，返回 True，否则返回 False
示例：
输入: 28
输出: True
解释: 28 = 1 + 2 + 4 + 7 + 14
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/perfect-number
*/
class Solution {
public:
    int findFactor(int num)
    {
        int sum = 0;
        for(int i = 2; i <= sqrt(num); ++i)
        {
            if(num % i == 0)
            {
                sum += i;
                if(num / i != i)
                    sum += (num / i);
            }
        }
        
        return sum + 1;
    }
    bool checkPerfectNumber(int num) {
        if(num == 1)
            return false;
        
        int sum = findFactor(num);
        
        return sum == num;
    }
};