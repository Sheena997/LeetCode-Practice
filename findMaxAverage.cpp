/*
给定 n 个整数，找出平均数最大且长度为 k 的连续子数组，并输出该最大平均数。
示例 1:
输入: [1,12,-5,-6,50,3], k = 4
输出: 12.75
解释: 最大平均数 (12-5-6+50)/4 = 51/4 = 12.75
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/maximum-average-subarray-i
*/
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0;
        for(int i = 0; i < k; ++i)
            sum += nums[i];
        int max = sum;
        for(int i = k; i < nums.size(); ++i)
        {
            sum = sum + nums[i] - nums[i - k];
            if(sum > max)
                max = sum;
        }
        
        double ak = k;
        return max / ak;
    }
};