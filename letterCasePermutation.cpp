/*
给定一个字符串S，通过将字符串S中的每个字母转变大小写，我们可以获得一个新的字符串。返回所有可能得到的字符串集合。
示例:
输入: S = "a1b2"
输出: ["a1b2", "a1B2", "A1b2", "A1B2"]
输入: S = "3z4"
输出: ["3z4", "3Z4"]
输入: S = "12345"
输出: ["12345"]
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/letter-case-permutation
*/
/*
DFS 回溯 看到题目要求组合或者集合，马上想到可以用回溯法：回溯法本来是说对于每个元素都先考虑放它的情况
再考虑不放它的情况；放在这道题的背景里就是，对于每个字母，先考虑放它，再考虑放它的另一种大小写形式。
*/
class Solution {
public:
    void DFS(int i, string S, vector<string>& res)
    {
        if(i == S.size())
        {
            res.push_back(S);
            return;
        }
        
        if(S[i] >= 'a' && S[i] <= 'z')
        {
            S[i] -= 32;//改变
            DFS(i + 1, S, res);
            
            S[i] += 32;//变回来
            DFS(i + 1, S, res);
        }
        else if(S[i] >= 'A' && S[i] <= 'Z')
        {
            S[i] += 32;//改变
            DFS(i + 1, S, res);
            
            S[i] -= 32;//变回来
            DFS(i + 1, S, res);
        }
        else
        {
            DFS(i + 1, S, res);
        }
    }
    vector<string> letterCasePermutation(string S) {
        vector<string> res;
        DFS(0, S, res);
        return res;
    }
};




