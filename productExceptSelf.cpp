/*
238. 除自身以外数组的乘积
给你一个长度为 n 的整数数组 nums，
其中 n > 1，返回输出数组 output ，
其中 output[i] 等于 nums 中除 nums[i]
 之外其余各元素的乘积。
示例:
输入: [1,2,3,4]
输出: [24,12,8,6]
提示：题目数据保证数组之中任意元素的全部
前缀元素和后缀（甚至是整个数组）的乘积都
在 32 位整数范围内。
说明: 请不要使用除法，且在 O(n) 时间复杂度内完成此题。
进阶：
你可以在常数空间复杂度内完成这个题目吗？
（ 出于对空间复杂度分析的目的，输出数组不被视为额外空间。）

来源：LeetCode
链接：https://leetcode-cn.com/problems/product-of-array-except-self/
*/
/*
//自己的
class Solution {
public:
    bool isOwn0(int i, vector<int> flag)
    {
        for(int j = 0; j < flag.size(); ++j)
        {
            if(j != i && flag[j] == 0)
                return true;
        }
        return false;
    }
    vector<int> productExceptSelf(vector<int>& nums) {
        int sum1 = 1, sum2 = 1;
        vector<int> flag(nums.size(), 1);
        for(int i = 0; i < nums.size(); ++i)
        {
            if(nums[i] == 0)
                flag[i] = 0;
            if(nums[i] != 0)
                sum1 *= nums[i];
            sum2 *= nums[i];    
        }
        
        for(int i = 0; i < nums.size(); ++i)
        {
            if(nums[i] != 0)
                nums[i] = sum2 / nums[i];
            else if(isOwn0(i, flag))
                nums[i] = 0;
            else
                nums[i] = sum1;
        }
        
        return nums;
    }
};
*/
//评论
/*
两趟遍历，一次从左端开始，记录每个元素左边元素的乘积。
第二次从右端开始，记录每个元素右边元素的乘积。
*/
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size());
        //从左端开始遍历
        //    1 2 3 4
        //res:1 1 2 6
        for(int i = 0, ret = 1; i < nums.size(); ++i)
        {
            res[i] = ret;
            ret *= nums[i];
        }
        //从右端开始遍历
        //     1  2 3  4
        //res1:1  1 2  6
        //res:24 12 8  6
        for(int i = nums.size() - 1, ret = 1; i >= 0; --i)
        {
            res[i] *= ret;
            ret *= nums[i];
        }
        
        return res;
    }
};