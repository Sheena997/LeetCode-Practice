/*
统计所有小于非负整数 n 的质数的数量。
示例:
输入: 10
输出: 4
解释: 小于 10 的质数一共有 4 个, 它们是 2, 3, 5, 7 。
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/count-primes
*/
class Solution {
public:
    int countPrimes(int n) {
        int sum = 0;
        vector<int> v(n, true);
        for(int j = 2; j < sqrt(n); ++j)
        {
            if(v[j])
            {
                for(int k = j * j; k < n; k += j)
                    v[k] = false;
            }
        }
        
        for(int i = 2; i < n; ++i)
        {
            if(v[i])
                ++sum;
        }
        
        return sum;
    }
};