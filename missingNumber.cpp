/*
缺失数字
给定一个包含 0, 1, 2, ..., n?中?n?个数的序列，找出 0 .. n?中没有出现在序列中的那个数。

示例 1:

输入: [3,0,1]
输出: 2

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/missing-number
*/
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ret = 0;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); ++i)
        {
            if(i != nums[i])
            {
                ret = i;
                break;
            }
            else
                ret = i + 1;
        }
        return ret;
    }
};