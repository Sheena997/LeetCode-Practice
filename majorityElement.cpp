/*
给定一个大小为 n 的数组，找到其中的众数。众数是指在数组中出现次数大于?? n/2 ??的元素。

你可以假设数组是非空的，并且给定的数组总是存在众数。

示例?1:

输入: [3,2,3]
输出: 3

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/majority-element
*/
/*摩尔投票法（推荐高效低内存）。
先假设第一个数过半数并设count=1；
遍历后面的数如果相同则+1，不同则-1，
当count为0时则更换新的数字为候选数（成立前提：有出现次数大于n/2的数存在）
*/
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 1;
        int ret = nums[0];
        for(int i = 1; i < nums.size(); ++i)
        {
            if(count == 0)
                ret = nums[i];
            if(nums[i] == ret)
                ++count;
            else
                --count;  
        }
        return ret;
    }
};