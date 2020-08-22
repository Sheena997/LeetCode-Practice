/*
面试题 05.04. 下一个数
下一个数。给定一个正整数，找出与其二进制表达式中1的个数相同
且大小最接近的那两个数（一个略大，一个略小）。

示例1:
 输入：num = 2（或者0b10）
 输出：[4, 1] 或者（[0b100, 0b1]）
示例2:
 输入：num = 1
 输出：[2, -1]
提示:

num的范围在[1, 2147483647]之间；
如果找不到前一个或者后一个满足条件的正数，那么输出 -1。

来源：LeetCode
链接：https://leetcode-cn.com/problems/closed-number-lcci/
*/
class Solution {
public:
    int countTheOneNum(long n)
    {
        int count = 0;
        while(n)
        {
            n &= (n - 1);
            ++count;
        }
        
        return count;
    }
    vector<int> findClosedNumbers(long num) {
        vector<int> res;
        int count = countTheOneNum(num);
        for(long i = num + 1; i <= 2 * num; ++i)
        {
            if(countTheOneNum(i) == count)
            {
                res.push_back(i);
                break;
            }
        }
        for(long i = num - 1; i >= 1; --i)
        {
            if(countTheOneNum(i) == count)
            {
                res.push_back(i);
                break;
            }
        }
        if(res.size() < 2)
            res.push_back(-1);
        
        return res;
    }
};