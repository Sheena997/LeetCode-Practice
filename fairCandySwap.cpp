/*
爱丽丝和鲍勃有不同大小的糖果棒：A[i] 是爱丽丝拥有的第 i 块糖的大小，B[j] 是鲍勃拥有的第 j 块糖的大小。
因为他们是朋友，所以他们想交换一个糖果棒，这样交换后，他们都有相同的糖果总量。（一个人拥有的糖果总量是他们拥有的糖果棒大小的总和。）
返回一个整数数组 ans，其中 ans[0] 是爱丽丝必须交换的糖果棒的大小，ans[1] 是 Bob 必须交换的糖果棒的大小。
如果有多个答案，你可以返回其中任何一个。保证答案存在。
示例 1：
输入：A = [1,1], B = [2,2]
输出：[1,2]
示例 3：
输入：A = [2], B = [1,3]
输出：[2,3]
示例 4：
输入：A = [1,2,5], B = [2,4]
输出：[5,4]
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/fair-candy-swap
*/
//把交换后的值相比较。
class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
        if(A.empty() || B.empty())
            return vector<int> {};
        
        vector<int> res(0);
        
        int sum_a = accumulate(A.begin(), A.end(), 0);//A中所有元素之和。
        int sum_b = accumulate(B.begin(), B.end(), 0);//B中所有元素之和。
        
        sort(A.begin(), A.end());
        sort(B.begin(), B.end());
        
        int i = 0;
        int j = 0;
        while(i < A.size() && j < B.size())
        {
            int a = sum_a + B[j] - A[i];
            int b = sum_b + A[i] - B[j];
            if(a > b)
            {
                ++i;
            }
            else if(a < b)
            {
                ++j;
            }
            else
            {
                res.push_back(A[i]);
                res.push_back(B[j]);
                break;
            }
        }
        return res;
        
    }
};
