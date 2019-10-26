/*(学会怎么取数组中存放数组的一个元素)
给出一个整数数组A和一个查询数组queries。

对于第i次查询，有?val =?queries[i][0], index?= queries[i][1]，我们会把?val?加到?A[index]?上。然后，第?i?次查询的答案是 A 中偶数值的和。

（此处给定的?index = queries[i][1]?是从 0 开始的索引，每次查询都会永久修改数组?A。）

返回所有查询的答案。你的答案应当以数组?answer?给出，answer[i]?为第?i?次查询的答案。

?

示例：

输入：A = [1,2,3,4], queries = [[1,0],[-3,1],[-4,0],[2,3]]
输出：[8,6,2,4]
解释：
开始时，数组为 [1,2,3,4]。
将 1 加到 A[0] 上之后，数组为 [2,2,3,4]，偶数值之和为 2 + 2 + 4 = 8。
将 -3 加到 A[1] 上之后，数组为 [2,-1,3,4]，偶数值之和为 2 + 4 = 6。
将 -4 加到 A[0] 上之后，数组为 [-2,-1,3,4]，偶数值之和为 -2 + 4 = 2。
将 2 加到 A[3] 上之后，数组为 [-2,-1,3,6]，偶数值之和为 -2 + 6 = 4。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/sum-of-even-numbers-after-queries
*/

class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& A, vector<vector<int>>& queries) {
        vector<int> answers;
        int sum = 0;
        for(int  i = 0; i < A.size(); ++i)
        {
            if(A[i] %2 == 0)//先将所有偶数相加
                sum += A[i];
        }
        
        for(int i = 0; i < queries.size(); ++i)
        {
            if(A[queries[i][1]] % 2 == 0 && queries[i][0] % 2 == 0)//都是偶数。A[queries[i][1]]获取要加到的A数组的哪个位置上。
                sum += queries[i][0];
            if(A[queries[i][1]] % 2 == 0 && queries[i][0] % 2 != 0)//A原本是偶数，加上一个奇数。
                sum -= (A[queries[i][1]]);
            //if(A[queries[i][1]] % 2 != 0 && queries[i][0] % 2 == 0)//A是奇数，加上偶数。
              //  sum += 0;
            if(A[queries[i][1]] % 2 != 0 && queries[i][0] % 2 != 0)//两个都是偶数。
                sum += (queries[i][0] + A[queries[i][1]]);
            answers.push_back(sum);
            A[queries[i][1]] += queries[i][0];
        }
        return answers;
    }
};

