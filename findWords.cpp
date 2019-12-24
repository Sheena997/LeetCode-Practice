/*
给定一个单词列表，只返回可以使用在键盘同一行的字母打印出来的单词。键盘如下图所示。
示例：
输入: ["Hello", "Alaska", "Dad", "Peace"]
输出: ["Alaska", "Dad"]
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/keyboard-row
*/
class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string s1 = "QWERTYUIOP";
        string s2 = "ASDFGHJKL";
        string s3 = "ZXCVBNM";
        vector<string> res;
        for(int i = 0; i < words.size(); ++i)
        {
            int flag1 = 0, flag2 = 0, flag3 = 0;
            string ret = words[i];
            for(int j = 0; j < ret.size(); ++j)
            { 
                ret[j] &= -33;
                if(s1.find(ret[j]) != s1.npos)
                    ++flag1;
                else if(s2.find(ret[j]) != s2.npos)
                    ++flag2;
                else if(s3.find(ret[j]) != s3.npos)
                    ++flag3;
            }
            if(flag1 == ret.size() || flag2 == ret.size() || flag3 == ret.size())
                res.push_back(words[i]);
        }
        return res;
    }
};

