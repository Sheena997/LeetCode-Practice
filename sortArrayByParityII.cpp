/*
给定一个非负整数数组 A， A 中一半整数是奇数，一半整数是偶数。
对数组进行排序，以便当 A[i] 为奇数时，i 也是奇数；当 A[i] 为偶数时， i 也是偶数。
你可以返回任何满足上述条件的数组作为答案。
示例：
输入：[4,2,5,7]
输出：[4,5,2,7]
解释：[4,7,2,5]，[2,5,4,7]，[2,7,4,5] 也会被接受。
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/sort-array-by-parity-ii
*/
class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        int i = 0, j = 1;
        while(i < A.size() && j < A.size())
        {
            if(A[A.size() - 1] % 2 == 0)
            {
                swap(A[i], A[A.size() - 1]);
                i += 2;
            }
            if(A[A.size() - 1] % 2 == 1)
            {
                swap(A[j], A[A.size() - 1]);
                j += 2;
            }
        }
        return A;
    }
};