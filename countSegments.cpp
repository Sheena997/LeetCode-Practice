/*
434. 字符串中的单词数
统计字符串中的单词个数，这里的单词指的是连续的不是空格的字符。

请注意，你可以假定字符串里不包括任何不可打印的字符。

示例:

输入: "Hello, my name is John"
输出: 5
来源：LeetCode
链接：https://leetcode-cn.com/problems/number-of-segments-in-a-string/
*/
class Solution {
public:
    int countSegments(string s) {
        vector<string> res;
        string ret = "";
        for(int i = 0; i < s.size(); ++i)
        {
            if(s[i] != ' ')
                ret += s[i];
            if((s[i] == ' ' || i == s.size() - 1) && ret != "")
            {
                res.push_back(ret);
                ret = "";
            }
        }
        
        return res.size();
    }
};