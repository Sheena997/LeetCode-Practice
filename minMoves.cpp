/*
最小移动次数使数组元素相等
给定一个长度为 n 的非空整数数组，找到让数组所有元素相等的最小移动次数。每次移动可以使 n - 1 个元素增加 1。
示例:
输入:
[1,2,3]
输出:
3
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/minimum-moves-to-equal-array-elements
*/
/*
每次操作n-1个元素加1，直到所有元素都相等 == 每次操作最大值-1，
直到所有元素等于最小值 == 求所有元素与最小值差值的和
*/
class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int min = nums[0];
        int sum = 0;
        for(int i =1 ; i < nums.size(); ++i)
        {
            sum += (nums[i] - min);
        }
        return sum;
    }
};
