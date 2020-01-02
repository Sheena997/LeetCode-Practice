/*
给定一个整数 (32 位有符号整数)，请编写一个函数来判断它是否是 4 的幂次方。
示例 1:
输入: 16
输出: true
示例 2:
输入: 5
输出: false
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/power-of-four
*/
class Solution {
public:
    bool isPowerOfFour(int num) {
        while(num != 0 && num % 4 == 0)
        {
            num /= 4;
        }
        
        return num == 1;
    }
};
//位运算
class Solution {
public:
    bool isPowerOfFour(int num) {
        /*
        4的次方数一定是2的次方数，但2的次方数不一定是4的次方数，通过4的次
        方数二进制可以发现4的次方数二进制中1只出现在奇数位。因此可以通过于奇
        数位都是1，偶数为都是0的数（1010101010101010101010101010101）进行与
        运算，结果仍为原来数。
        */
        return num > 0 && !(num & (num - 1)) && (num & 0x55555555) == num;
    }
};
