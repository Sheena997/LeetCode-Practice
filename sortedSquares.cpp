/*
给定一个按非递减顺序排序的整数数组 A，返回每个数字的平方组成的新数组，要求也按非递减顺序排序。
示例 1：
输入：[-4,-1,0,3,10]
输出：[0,1,9,16,100]
示例 2：
输入：[-7,-3,2,3,11]
输出：[4,9,9,49,121]
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/squares-of-a-sorted-array
*/
class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        /*
        vector<int> res;
        for(int i = 0; i < A.size(); ++i)
        {
            res.push_back(A[i] * A[i]);
        }
        
        sort(res.begin(), res.end());
        return res;
        */
        
        //原数组有序
        vector<int> res(A.size());
        int i = 0, j = A.size() - 1, k = A.size() - 1;
        
        while(k >= 0)
        {
            int a = A[i] * A[i];
            int b = A[j] * A[j];
            
            if(a > b)
            {
                res[k] = a;
                ++i;
            }
            else
            {
                res[k] = b;
                --j;
            }
            
            --k;
        }
        
        return res;
    }
};