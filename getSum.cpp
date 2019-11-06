/*不使用运算符+ 和-，计算两整数a、b之和。
示例 1:
输入: a = 1, b = 2
输出: 3
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/sum-of-two-integers
*/
//递归
class Solution {
public:
    int getSum(int a, int b) {
        if(b == 0)
            return a;
        unsigned int sum = a ^ b;
        auto carry = ((unsigned int)(a & b)) << 1;
        return getSum(sum, carry);
    }
};
//非递归
class Solution {
public:
    int getSum(int a, int b) {
        while(b)
        {
            unsigned int sum = a ^ b;
            auto carry = ((unsigned int) (a & b)) << 1;
            b = carry;
            a = sum;
        }
        return a;
    }
};
