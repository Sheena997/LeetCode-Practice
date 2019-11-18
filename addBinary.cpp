/*
二进制求和（字符串型）
给定两个二进制字符串，返回他们的和（用二进制表示）。
输入为非空字符串且只包含数字 1 和 0。
示例 1:
输入: a = "11", b = "1"
输出: "100"
示例 2:
输入: a = "1010", b = "1011"
输出: "10101"
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/add-binary
*/
class Solution {
public:
    string addBinary(string a, string b) {
        string sum;
        if(a.size() < b.size())
            swap(a, b);
        int len = a.size() - b.size();
        if(len > 0)
            b.insert(0, len, '0');
        int i = b.size() - 1;
        int cur = 0;
        int ret = 0;
        while(i >= 0)
        {
            cur = (a[i] - '0') ^ (b[i] - '0') ^ ret;
            sum.insert(0, 1, cur + '0');
            if((a[i] - '0') + (b[i] - '0') + ret > 1)
                ret = 1;
            else
                ret = 0;
            --i;
        }
        if(ret)
            sum.insert(0, 1, ret + '0');
        return sum;
    }
};
