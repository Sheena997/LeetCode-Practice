/*
给定一个非负整数数组 A，返回一个数组，在该数组中， A 的所有偶数元素之后跟着所有奇数元素。
你可以返回满足此条件的任何数组作为答案。
示例：
输入：[3,1,2,4]
输出：[2,4,3,1]
输出 [4,2,3,1]，[2,4,1,3] 和 [4,2,1,3] 也会被接受。
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/sort-array-by-parity
*/
class Solution {
public:
    void Swap(int* p, int* q)
    {
        int tmp = *p;
        *p = *q;
        *q = tmp;
    }
    vector<int> sortArrayByParity(vector<int>& A) {
        int i = 0, j = A.size() - 1;
        while(i <= j)
        {
            if(A[i] % 2 != 0 && A[j] % 2 == 0)
            {
                Swap(&A[i], &A[j]);
                ++i;
                --j;
            }
            else if(A[i] % 2 == 0)
            {
                ++i;
            }
            else if(A[j] % 2 != 0)
            {
                --j;
            }
        }
        
        return A;
    }
};