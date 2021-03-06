/*
1304. 和为零的N个唯一整数
给你一个整数 n，请你返回 任意 一个由 n 个 各不相同 的整数组成的数组，并且这 n 个数相加和为 0 。

示例 1：
输入：n = 5
输出：[-7,-1,1,3,4]
解释：这些数组也是正确的 [-5,-1,1,2,3]，[-3,-1,2,-2,4]。

示例 2：
输入：n = 3
输出：[-1,0,1]

示例 3：
输入：n = 1
输出：[0]

提示：
1 <= n <= 1000

来源：LeetCode
链接：https://leetcode-cn.com/problems/find-n-unique-integers-sum-up-to-zero/
*/
class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> vc;
        int i = 1, sum = 0;
        while(n > 1)
        {
            vc.push_back(i);
            sum += i;
            ++i;
            --n;
        }
        vc.push_back(-sum);
        
        return vc;
    }
};

class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> vc;
        for(int i = 1; i <= n / 2; ++i)
        {
            vc.push_back(i);
            vc.push_back(-i);
        }
        if((n & 1) == 1)
            vc.push_back(0);
        
        return vc;
    }
};