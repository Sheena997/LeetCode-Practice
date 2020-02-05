/*
给定一个整数数组，你需要寻找一个连续的子数组，如果对这个子数组进行升序排序，那么整个数组都会变为升序排序。
你找到的子数组应是最短的，请输出它的长度。
示例 1:
输入: [2, 6, 4, 8, 10, 9, 15]
输出: 5
解释: 你只需要对 [6, 4, 8, 10, 9] 进行升序排序，那么整个表都会变为升序排序。
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/shortest-unsorted-continuous-subarray
*/
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> v(nums);
        sort(v.begin(), v.end());
        
        int i = 0, j = nums.size() - 1;
        while(i <= j && nums[i] == v[i])
            ++i;
        while(i <= j && nums[j] == v[j])
            --j;
       
        if(i >= j)
            return 0;
        
        return j - i + 1;
    }
};