/*
给定一个数组 nums，编写一个函数将所有 0 移动到数组的末尾，同时保持非零元素的相对顺序。

示例:

输入: [0,1,0,3,12]
输出: [1,3,12,0,0]

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/move-zeroes
*/
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //快慢指针
        int i = 0;
        for(int j = 0; j < nums.size(); ++j)
        {
            if(nums[j] != 0)
            {
                nums[i] = nums[j];
                ++i;
            }
        }
        for(int j = i; j < nums.size(); ++j)
        {
            nums[j] = 0;
        }
    }
};