
/*
区域和检索 - 数组不可变
给定一个整数数组 nums，求出数组从索引i到j(i≤j) 范围内元素的总和，包含i,j两点。

示例：

给定 nums = [-2, 0, 3, -5, 2, -1]，求和函数为 sumRange()

sumRange(0, 2) -> 1
sumRange(2, 5) -> -1
sumRange(0, 5) -> -3

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/range-sum-query-immutable

*/
class NumArray {
public:
    vector<int> nums1;
    NumArray(vector<int>& nums) {
        nums1 = nums;
    }
    
    int sumRange(int i, int j) {
        int sum = 0;
        for(int a = i; a < j + 1; ++a)
        {
            sum += nums1[a];
        }
        return sum;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */
 