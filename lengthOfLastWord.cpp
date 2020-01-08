/*
给定一个仅包含大小写字母和空格 ' ' 的字符串，返回其最后一个单词的长度。
如果不存在最后一个单词，请返回 0 。
说明：一个单词是指由字母组成，但不包含任何空格的字符串。
示例:
输入: "Hello World"
输出: 5
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/length-of-last-word
*/
//方法一：
class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        for(int i = s.size() - 1; i >= 0; --i)
        {
            if(s[i] != ' ')
                ++count;
            else if(count != 0)
                break;
        }
        return count;
    }
};
//方法二：
class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.empty())
            return 0;
        vector<string> res;
        for(int i = 0; i < s.size(); ++i)
        {
            while(i < s.size() && s[i] == ' ')
                ++i;
            string ret;
            while(i < s.size() && s[i] != ' ')
            {
                ret += s[i];
                ++i;
            }
            if(!ret.empty())
                res.push_back(ret);
        }
        if(!res.empty())
            return res[res.size() - 1].size();
        return 0;
    }
};





