/*
137. 只出现一次的数字 II
给定一个非空整数数组，除了某个元素只出现一次以外，其余每个元素均出现了三次。找出那个只出现了一次的元素。
说明:
你的算法应该具有线性时间复杂度。 你可以不使用额外空间来实现吗？
示例 1:
输入: [2,2,3,2]
输出: 3
示例 2:
输入: [0,1,0,1,0,1,99]
输出: 99
来源：LeetCode
链接：https://leetcode-cn.com/problems/single-number-ii/
*/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int one = 0, tow = 0, three = 0;
        
        for(int e : nums)
        {
            //tow的相应的位等于1，表示该位出现两次
            tow |= (one & e);
            
            //one的相应的位等于1，表示该位出现一次
            one ^= e;
            
            //three的相应的位等于1，表示该位出现三次
            three = (one & tow);
            
            //如果相应的位出现3次，则该位重置为0
            tow &= ~three;//x & ~x = 0;
            one &= ~three;//x & ~0 = x;   
        }
        
        return one;
    }
};