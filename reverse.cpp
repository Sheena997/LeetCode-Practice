/*
给出一个 32 位的有符号整数，你需要将这个整数中每位上的数字进行反转。
示例 1:
输入: 123
输出: 321
示例 2:
输入: -123
输出: -321
示例 3:
输入: 120
输出: 21
注意:
假设我们的环境只能存储得下 32 位的有符号整数，则其数值范围为 [−231,  231 − 1]。请根据这个假设，如果反转后整数溢出那么就返回 0。
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/reverse-integer
*/
class Solution {
public:
    int reverse(int x) {
        int a = abs(x);
        vector<int> res;
        while(x)
        {
            res.push_back(x % 10);
            x /= 10;
        }
        
        int max = 0x7fffffff, min = 0x80000000;
        long long sum = 0;
        for(auto e : res)
            sum = sum * 10 + e;
        if(x < 0)
            sum = (-sum);
        if(sum > max || sum < min)
            return 0;
        return sum;
    }
};

// 评论的
class Solution {
public:
    int reverse(int x) {
        if(x / 10 == 0)
            return x;
        int sum = 0;
        while(x)
        {
            if(sum > INT_MAX / 10 || sum < INT_MIN / 10)
                return 0;
            
            sum *= 10;
            sum += x % 10;
            x /= 10;
        }
        return sum;
    }
};
