/*
栈
给出由小写字母组成的字符串 S，重复项删除操作会选择两个相邻且相同的字母，并删除它们。
在 S 上反复执行重复项删除操作，直到无法继续删除。
在完成所有重复项删除操作后返回最终的字符串。答案保证唯一。
示例：
输入："abbaca"
输出："ca"
解释：
例如，在 "abbaca" 中，我们可以删除 "bb" 由于两字母相邻且相同，这是此时唯一可以执行删除操作的重复项。之后我们得到字符串 "aaca"，其中又只有 "aa" 可以执行重复项删除操作，所以最后的字符串为 "ca"。
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/remove-all-adjacent-duplicates-in-string
*/
class Solution {
public:
    string removeDuplicates(string S) {
        /*
        int top = -1;
        for(auto& e : S)
        {
            if(top == -1)
            {
                S[++top] = e;
            }
            else
            {
                if(e == S[top])//若栈顶元素相同就出栈
                    --top;
                else
                    S[++top] = e;
            }   
        }
        
        return {S.begin(), S.begin() + top + 1};
        */
        
        stack<char> s;
        int i = 0;
        while(i < S.size())
        {
            if(s.empty() || S[i] != s.top())
                s.push(S[i]);
            else
                s.pop();
            ++i;
        }
        string res;
        while(!s.empty())
        {
            res += s.top();
            s.pop();
        }
        
        reverse(res.begin(), res.end());
        
        return res;
    }
};
