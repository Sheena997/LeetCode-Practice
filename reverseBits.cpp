/*
颠倒给定的 32 位无符号整数的二进制位。
示例 1：
输入: 00000010100101000001111010011100
输出: 00111001011110000010100101000000
解释: 输入的二进制串 00000010100101000001111010011100 表示无符号整数 43261596，
      因此返回 964176192，其二进制表示形式为 00111001011110000010100101000000。
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/reverse-bits
*/
//位运算
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t res = 0;
        int i = 32;
        while(i--)//原数为32位
        {
            res <<= 1;
            res += (n & 1);//n&1是取出n的最后一位。
            n >>= 1;//将n的最后一位移走，倒数第二位变成最后一位。
        }
        return res;
    }
};
