/*
16. 最接近的三数之和
给定一个包括 n 个整数的数组 nums 和 一个目标值 target。找出 nums 中的三个整数，
使得它们的和与 target 最接近。返回这三个数的和。假定每组输入只存在唯一答案。 

示例：

输入：nums = [-1,2,1,-4], target = 1
输出：2
解释：与 target 最接近的和是 2 (-1 + 2 + 1 = 2) 。

来源：LeetCode
链接：https://leetcode-cn.com/problems/3sum-closest/
*/
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int res = nums[0] + nums[1] + nums[2];
        for(int i = 0; i < nums.size() - 2; ++i)
        {
            int left = i + 1, right = nums.size() - 1;
            while(left < right)
            {
                int ret = nums[left] + nums[i] + nums[right];
                if(abs(ret - target) < abs(res - target))
                    res = ret;
                
                if(ret < target)
                    ++left;
                else if(ret > target)
                    --right;
                else
                    return ret;
            }
        }
        
        return res;
    }
};