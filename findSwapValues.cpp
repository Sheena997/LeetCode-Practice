/*
面试题 16.21. 交换和
给定两个整数数组，请交换一对数值（每个数组中取一个数值），使得两个数组所有元素的和相等。
返回一个数组，第一个元素是第一个数组中要交换的元素，第二个元素是第二个数组中要交换的元素。
若有多个答案，返回任意一个均可。若无满足条件的数值，返回空数组。

示例:

输入: array1 = [4, 1, 2, 1, 1, 2], array2 = [3, 6, 3, 3]
输出: [1, 3]
示例:

输入: array1 = [1, 2, 3], array2 = [4, 5, 6]
输出: []
提示：

1 <= array1.length, array2.length <= 100000
通过次数3,437提交次数7,758

来源：LeetCode
链接：https://leetcode-cn.com/problems/sum-swap-lcci/
*/
class Solution {
public:
    vector<int> findSwapValues(vector<int>& array1, vector<int>& array2) {
        unordered_set<int> unst(array1.begin(), array1.end());
        int sum1 = 0, sum2 = 0;
        for(auto e : array1)
            sum1 += e;
        for(auto e : array2)
            sum2 += e;
        
        int ret = sum1 - sum2;
        if(ret % 2 != 0)
            return {};
        
        ret >>= 1;
        
        for(auto i : array2)
        {
            if(unst.count(i + ret))
                return {i + ret, i};
        }
        
        return {};
    }
};