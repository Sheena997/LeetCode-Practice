/*
编写一个算法来判断一个数是不是“快乐数”。

一个“快乐数”定义为：对于一个正整数，每一次将该数替换为它每个位置上的数字的平方和，然后重复这个过程直到这个数变为 1，也可能是无限循环但始终变不到 1。如果可以变为 1，那么这个数就是快乐数。

示例:?

输入: 19
输出: true
解释: 
12 + 92 = 82
82 + 22 = 68
62 + 82 = 100
12 + 02 + 02 = 1

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/happy-number
*/
class Solution {
public:
    bool isHappy(int n) {
        /*//方法一：暴力解法，直接循环100次
        for(int i = 0; i < 100; ++i)
        {
            int sum = 0;
            while(n)
            {
                sum += ((n % 10) * (n % 10));
                n /= 10;
            }
            n = sum;
            if(sum == 1)
                return true;
            sum = 0;
        }
        return false;
        */
        //方法二：递归 1-9中只有1和7是“快乐数”，其他均不是“快乐数”，
        if(n == 1 || n == 7)
            return true;
        if(n < 10)
            return false;
        int sum = 0;
        while(n) 
        {
            sum += ((n % 10) * (n % 10));
            n /= 10;
        }
        n = sum;
        return isHappy(n);
    }
};
