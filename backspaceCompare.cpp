/*
比较含退格的字符串
给定 S 和 T 两个字符串，当它们分别被输入到空白的文本编辑器后，判断二者是否相等，并返回结果。 # 代表退格字符。
示例 1：
输入：S = "ab#c", T = "ad#c"
输出：true
解释：S 和 T 都会变成 “ac”。
示例 2：
输入：S = "ab##", T = "c#d#"
输出：true
解释：S 和 T 都会变成 “”。
示例 3：
输入：S = "a##c", T = "#a#c"
输出：true
解释：S 和 T 都会变成 “c”。
示例 4：
输入：S = "a#c", T = "b"
输出：false
解释：S 会变成 “c”，但 T 仍然是 “b”。
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/backspace-string-compare
*/
//自己写的
class Solution {
public:
    bool backspaceCompare(string S, string T) {
        if(S.empty() && T.empty())
            return true;
        else if(S.empty() || T.empty())
            return false;
        stack<char> s;
        stack<char> t;
        int i = 0;
        while(i < S.size())
        {
            if(!s.empty() && S[i] == '#')
                s.pop();
            else if(S[i] != '#')
                s.push(S[i]);
            ++i;
        }
        int j = 0;
        while(j < T.size())
        {
            if(!t.empty() && T[j] == '#')
                t.pop();
            else if(T[j] != '#')
                t.push(T[j]);
            ++j;
        }
		//没必要
		/*
        string s1;
        string s2;
        while(!s.empty())
        {
            s1 += s.top();
            s.pop();
        }
        while(!t.empty())
        {
            s2 += t.top();
            t.pop();
        }
        return s1 == s2;*/
		return s == t;
    }
};
/*
//别人的
class Solution {
public:
    bool backspaceCompare(string S, string T) {
        stack<char> s;
        stack<char> t;
        for(auto x : S)
        {
            if(x != '#')
                s.push(x);
            if(x == '#' && !s.empty())
                s.pop();
        }
        for(auto x : T)
        {
            if(x != '#')
                t.push(x);
            if(x == '#' && !t.empty())
                t.pop();
        }
        return s == t;
    }
};
*/
