/*
442. 数组中重复的数据
给定一个整数数组 a，其中1 ≤ a[i] ≤ n （n为数组长度）, 其中有些元素出现两次而其他元素出现一次。
找到所有出现两次的元素。
你可以不用到任何额外空间并在O(n)时间复杂度内解决这个问题吗？
示例：
输入:
[4,3,2,7,8,2,3,1]
输出:
[2,3]

来源：LeetCode
链接：https://leetcode-cn.com/problems/find-all-duplicates-in-an-array/
*/
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        /*
        vector<int> res;
        for(int i = 0; i < nums.size(); ++i)
        {
            while(nums[nums[i] - 1] != nums[i])
                swap(nums[nums[i] - 1], nums[i]);
        }
        
        for(int i = 0; i < nums.size(); ++i)
        {
            if(nums[i] != i + 1)
                res.push_back(nums[i]);
        }
        return res;
        */
        
        map<int, int> mp;
        for(auto e : nums)
            ++mp[e];
        vector<int> res;
        for(int i = 0; i < mp.size(); ++i)
        {
            if(mp[i] == 2)
                res.push_back(i);
        }
        
        return res;
    }
};