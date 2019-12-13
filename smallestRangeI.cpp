/*
给定一个整数数组 A，对于每个整数 A[i]，我们可以选择任意 x 满足 -K <= x <= K，并将 x 加到 A[i] 中。
在此过程之后，我们得到一些数组 B。
返回 B 的最大值和 B 的最小值之间可能存在的最小差值。
示例 1：
输入：A = [1], K = 0
输出：0
解释：B = [1]
示例 2：
输入：A = [0,10], K = 2
输出：6
解释：B = [2,8]
示例 3：
输入：A = [1,3,6], K = 3
输出：0
解释：B = [3,3,3] 或 B = [4,4,4]
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/smallest-range-i
*/
/*
B的最大值减去B的最小是，差值最小；也就是说先对A排序 取A的最大值max和最小值min;
让max-min尽可能更小； 怎么做到最可能最小，就是让max减少k，让min增加+k ，这样减
数减少，被减少增加，那么差值就最小了。但是有个条件就是max -k>min+k
*/
class Solution {
public:
    int smallestRangeI(vector<int>& A, int K) {
        if(A.size() == 1)
            return 0;
        int max = A[0], min = A[1];
        for(int i = 0; i < A.size(); ++i)
        {
            if(max < A[i])
                max = A[i];
            if(min > A[i])
                min = A[i];
        }
        
        int m = K, n = -K;
        int retx = max + n, retn = min + m;
        if(retx - retn > 0)
            return retx - retn;
        else
            return 0;
    }
};