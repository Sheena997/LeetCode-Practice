/*
679. 24 点游戏
你有 4 张写有 1 到 9 数字的牌。你需要判断是否能通过 *，/，+，-，(，) 的运算得到 24。
示例 1:
输入: [4, 1, 8, 7]
输出: True
解释: (8-4) * (7-1) = 24
示例 2:
输入: [1, 2, 1, 2]
输出: False
注意:
除法运算符 / 表示实数除法，而不是整数除法。例如 4 / (1 - 2/3) = 12 。
每个运算符对两个数进行运算。特别是我们不能用 - 作为一元运算符。例如，[1, 1, 1, 1] 
作为输入时，表达式 -1 - 1 - 1 - 1 是不允许的。
你不能将数字连接在一起。例如，输入为 [1, 2, 1, 2] 时，不能写成 12 + 12 。

来源：LeetCode
链接：https://leetcode-cn.com/problems/24-game/
*/
class Solution {
public:
    bool is24True(double *arr, int n)
    {
        if(fabs(arr[0] - 24) < 0.0001 && n == 1)
            return true;
        else if(n > 1)
        {
            for(int i = 0; i < n; ++i)
            {
                for(int j = 0; j < n; ++j)
                {
                    if(i == j)
                        continue;
                    int m = 0;
                    double brr[4];
                    for(int k = 0; k < n; ++k)
                    {
                        if(k != i && k != j)
                            brr[m++] = arr[k];
                    }
                    brr[m] = arr[i] + arr[j];
                    if(is24True(brr, m + 1))
                        return true;
                    brr[m] = arr[i] - arr[j];
                    if(is24True(brr, m + 1))
                        return true;
                    brr[m] = arr[i] * arr[j];
                    if(is24True(brr, m + 1))
                        return true;
                    if(arr[j])
                    {
                        brr[m] = arr[i] / arr[j];
                        if(is24True(brr, m + 1))
                            return true;
                    }
                }
            }
        }
        return false;
    }
    bool judgePoint24(vector<int>& nums) {
        double arr[4];
        for(int i = 0; i < 4; ++i)
            arr[i] = (double)nums[i];
        if(is24True(arr, 4))
            return true;
        else
            return false;
    }
};