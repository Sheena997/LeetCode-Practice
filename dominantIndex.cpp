/*
在一个给定的数组nums中，总是存在一个最大元素 。
查找数组中的最大元素是否至少是数组中每个其他数字的两倍。
如果是，则返回最大元素的索引，否则返回-1。
示例 1:
输入: nums = [3, 6, 1, 0]
输出: 1
解释: 6是最大的整数, 对于数组中的其他整数,
6大于数组中其他元素的两倍。6的索引是1, 所以我们返回1.
示例 2:
输入: nums = [1, 2, 3, 4]
输出: -1
解释: 4没有超过3的两倍大, 所以我们返回 -1.
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/largest-number-at-least-twice-of-others
*/
class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        /*
        int max = nums[0];
        for(int i = 1; i < nums.size(); ++i)
        {
            if(max < nums[i])
                max = nums[i];
        }
        
        int j = -1;
        for(int i = 0;i < nums.size(); ++i)
        {
            if(nums[i] == max)
                j = i;
            else if(max < nums[i] * 2)
                return -1;
        }
        
        return j;
        */
        
        // 评论区
        int max_num = 0, second_num = 0;
        int max_index;
        
        for(int i = 0; i < nums.size(); ++i)
        {
            if(nums[i] > max_num)
            {
                second_num = max_num;
                max_num = nums[i];
                max_index = i;
            }
            else if(nums[i] > second_num)
            {
                second_num = nums[i];
            }
        }
        
        return max_num >= 2 * second_num ? max_index : -1;
    }
};