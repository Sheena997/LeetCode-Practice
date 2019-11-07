/*
仅仅反转字母
给定一个字符串 S，返回 “反转后的” 字符串，其中不是字母的字符都保留在原地，而所有字母的位置发生反转。
示例 1：
输入："ab-cd"
输出："dc-ba"
示例 2：
输入："a-bC-dEf-ghIj"
输出："j-Ih-gfE-dCba"
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/reverse-only-letters
*/
class Solution {
public:
    string reverseOnlyLetters(string S) {
        int i = 0;
        int j = S.size() - 1;
        while(i < j)
        {
            while(i < j && !((S[i] >= 'a' && S[i] <= 'z' ) || (S[i] >= 'A' && S[i] <= 'Z')))
                ++i;
            while(i < j && !((S[j] >= 'a' && S[j] <= 'z' ) || (S[j] >= 'A' && S[j] <= 'Z')))
                --j;
            if(i < j)
                swap(S[i++], S[j--]);
        }
        return S;
    }
};
