/*
给定一个整型数组，在数组中找出由三个数组成的最大乘积，并输出这个乘积。
示例 1:
输入: [1,2,3]
输出: 6
示例 2:
输入: [1,2,3,4]
输出: 24
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/maximum-product-of-three-numbers
*/
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return max(nums[nums.size() - 1] * nums[nums.size() - 2] * nums[nums.size() - 3], nums[0] * nums[1] * nums[nums.size() - 1]); 
    }
};