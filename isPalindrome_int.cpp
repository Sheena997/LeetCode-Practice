/*
判断一个整数是否是回文数。回文数是指正序（从左向右）和倒序（从右向左）读都是一样的整数。

示例 1:

输入: 121
输出: true
链接：https://leetcode-cn.com/problems/palindrome-number/

*/
class Solution {
public:
    bool isPalindrome(int x) {
        vector<int> v;
        if(x < 0)
            return false;
        if(x >= 0 && x < 10)
            return true;
        while(x)
        {
            v.push_back(x%10);
            x /= 10;
        }
        int flag = 0;
        for(int i = 0; i < v.size() / 2; ++i)
        {
            if(v[i] == v[v.size() - i - 1])
                flag = 1;
            else 
                return false;
        }
        if(flag == 1)
            return true;
        else 
            return false;
    }
};

