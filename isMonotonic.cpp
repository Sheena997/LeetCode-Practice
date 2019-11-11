/*
如果数组是单调递增或单调递减的，那么它是单调的。
如果对于所有 i <= j，A[i] <= A[j]，那么数组 A 是单调递增的。 如果对于所有 i <= j，A[i]> = A[j]，那么数组 A 是单调递减的。
当给定的数组 A 是单调数组时返回 true，否则返回 false。
示例 1：
输入：[1,2,2,3]
输出：true
示例 2：
输入：[6,5,4,4]
输出：true
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/monotonic-array
*/
class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        if(A.size() == 1 || A.empty())
            return true;
        int m = 0, n = 0;
        int i = 0;
        for(int i = 0; i < A.size() - 1; ++i)
        {
            if(A[i] < A[i + 1])
                m = 1;
            if(A[i] > A[i + 1])
                n = 1;
        }
        if(m + n == 2)
            return false;
        return true;
    }
};