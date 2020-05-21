/*
存在重复元素
给定一个整数数组，判断是否存在重复元素。
如果任何值在数组中出现至少两次，函数返回 true。如果数组中每个元素都不相同，则返回 false。
示例 1:
输入: [1,2,3,1]
输出: true
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/contains-duplicate
*/
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if(nums.empty())
            return false;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size() - 1; ++i)
        {
            if(nums[i] == nums[i + 1])
                return true;
        }
        return false;
    }
};

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if(nums.empty())
            return false;
        map<int, int> mp;
        for(auto e : nums)
        {
            ++mp[e];
            if(mp[e] >= 2)
                return true;
        }
        
        return false;
    }
};