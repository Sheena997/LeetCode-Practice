/*
给定一个长度为 n 的整数数组，你的任务是判断在最多改变 1 个元素的情况下，该数组能否变成一个非递减数列。
我们是这样定义一个非递减数列的： 对于数组中所有的 i (1 <= i < n)，满足 array[i] <= array[i + 1]。
示例 1:
输入: [4,2,3]
输出: True
解释: 你可以通过把第一个4变成1来使得它成为一个非递减数列。
示例 2:
输入: [4,2,1]
输出: False
解释: 你不能在只改变一个元素的情况下将其变为非递减数列。
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/non-decreasing-array
*/
class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int i = 0, j = nums.size() - 1;
        while(i < j && nums[i] <= nums[i + 1])
            ++i;
        while(i < j && nums[j] >= nums[j - 1])
            --j;
        
        int leftMax = i == 0 ? INT_MIN : nums[i - 1];
        int rightMin = j == nums.size() - 1 ? INT_MAX : nums[j + 1];
        
        // 左边最大的小于等于右边最小的或者右边最小的大于等于左边最大的
        // 且控制左边最大的和右边最小的下标相距为1或者是同一个数（相距1就是改变一个数）
        if(j - i <= 1 && (leftMax <= nums[j] || rightMin >= nums[i]))
            return true;
        
        return false;
    }
};