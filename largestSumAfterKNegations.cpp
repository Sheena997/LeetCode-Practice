/*
给定一个整数数组 A，我们只能用以下方法修改该数组：我们选择某个个索引 i 并将 A[i] 替换为 -A[i]，然后总共重复这个过程 K 次。（我们可以多次选择同一个索引 i。）
以这种方式修改数组后，返回数组可能的最大和。
示例 1：
输入：A = [4,2,3], K = 1
输出：5
解释：选择索引 (1,) ，然后 A 变为 [4,-2,3]。
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/maximize-sum-of-array-after-k-negations
*/
//每次将最小的数取反。
class Solution {
public:
    int largestSumAfterKNegations(vector<int>& A, int K) {
        int sum = 0;
        while(K--)
        { 
            sum = 0;
            sort(A.begin(), A.end());
            A[0] = (-A[0]);
            sum += accumulate(A.begin(), A.end(), 0);
        }
        return sum;
    }
};