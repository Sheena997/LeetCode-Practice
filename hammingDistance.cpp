/*
两个整数之间的汉明距离指的是这两个数字对应二进制位不同的位置的数目。
给出两个整数 x 和 y，计算它们之间的汉明距离。
注意：
0 ≤ x, y < 2^31.
示例:
输入: x = 1, y = 4
输出: 2
解释:
1   (0 0 0 1)
4   (0 1 0 0)
       ↑   ↑
上面的箭头指出了对应二进制位不同的位置。
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/hamming-distance
*/
class Solution {
public:
    int hammingDistance(int x, int y) {
        int sum = 0;
        int ret = x ^ y;
        while(ret)
        {
            if(ret & 1 == 1)
                ++sum;
            ret >>= 1;
        }
        return sum;
    }
};
