/*
给定一个正整数 N，找到并返回 N 的二进制表示中两个连续的 1 之间的最长距离。 
如果没有两个连续的 1，返回 0 。
示例 1：
输入：22
输出：2
解释：
22 的二进制是 0b10110 。
在 22 的二进制表示中，有三个 1，组成两对连续的 1 。
第一对连续的 1 中，两个 1 之间的距离为 2 。
第二对连续的 1 中，两个 1 之间的距离为 1 。
答案取两个距离之中最大的，也就是 2 。
示例 2:
输入：5
输出：2
解释：
5 的二进制是 0b101 。
示例 3：
输入：6
输出：1
解释：
6 的二进制是 0b110 。
示例 4：
输入：8
输出：0
解释：
8 的二进制是 0b1000 。
在 8 的二进制表示中没有连续的 1，所以返回 0 。
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/binary-gap
*/
/*
class Solution {
public:
    int binaryGap(int N) {
        vector<int> ret;
        while(N)
        {
            ret.push_back(N % 2);
            N /= 2;
        }
        int res = 0, sum = 0;
        vector<int> v;
        for(int i = 0; i < ret.size(); ++i)
        { 
            if(ret[i] == 1)
                v.push_back(i);
        }
        if(v.empty() || v.size() == 1)
            return 0;
        else
        {
            int a = 0;
            for(int j = 1; j < v.size(); ++j)
            {
                a = v[j] - v[j - 1];
                if(a > res)
                    res = a;
            }
        }
        return res;
    }
};
*/
class Solution {
public:
    int binaryGap(int N) {
        int last = -1, res = 0, i = 0;
        while(N)
        {
            if(N & 1 == 1)
            {
                if(last >= 0)
                    res = max(res, i - last);
                last = i;
            }
            N >>= 1;
            ++i;
        }
        
        return res;
    }
};