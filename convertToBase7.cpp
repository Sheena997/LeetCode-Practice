/*
给定一个整数，将其转化为7进制，并以字符串形式输出。
示例 1:
输入: 100
输出: "202"
示例 2:
输入: -7
输出: "-10"
注意: 输入范围是 [-1e7, 1e7] 。
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/base-7
*/
class Solution {
public:
    string convertToBase7(int num) {
        string res;
        if(num == 0)
            return "0";
        bool ng = false;
        if(num < 0)
        {
            ng = true;
            num = -num;
        }
        while(num)
        {
            res += (num % 7 + '0');
            num /= 7;
        }
        reverse(res.begin(), res.end());
        if(ng)
            res.insert(0, 1, '-');
        return res;
    }
};
