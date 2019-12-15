/*
//有序数组中出现次数超过25%的元素。
//map的使用
给你一个非递减的有序整数数组，已知这个数组中恰好有一个整数，它的出现次数超过数组元素总数的 25%。
请你找到并返回这个整数
示例：
输入：arr = [1,2,2,6,6,6,6,7,10]
输出：6
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/element-appearing-more-than-25-in-sorted-array
*/
class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        map<int, int> m;
        for(auto e : arr)
        {
            ++m[e];
            if(m[e] > arr.size() / 4)
                return e;
        }
        return -1;
    }
};

