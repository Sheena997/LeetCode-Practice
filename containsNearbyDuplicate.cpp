/*
给定一个整数数组和一个整数 k，判断数组中是否存在两个不同的索引 i 和 j，使得 nums [i] = nums [j]，并且 i 和 j 的差的绝对值最大为 k。
示例 1:
输入: nums = [1,2,3,1], k = 3
输出: true
示例 2:
输入: nums = [1,0,1,1], k = 1
输出: true
示例 3:
输入: nums = [1,2,3,1,2,3], k = 2
输出: false
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/contains-duplicate-ii
*/
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> unmap;
        
        for(int i = 0; i < nums.size(); ++i)
        {
            if(unmap.find(nums[i]) != unmap.end())
            {
                if(i - unmap[nums[i]] <= k)
                    return true;
                else
                    unmap[nums[i]] = i;
            }
            else
            {
                unmap[nums[i]] = i;
            }
        }
        
        return false;
    }
};