/*
给定一种规律 pattern 和一个字符串 str ，判断 str 是否遵循相同的规律。
这里的 遵循 指完全匹配，例如， pattern 里的每个字母和字符串 str 中的每个非空单词之间存在着双向连接的对应规律。
示例1:
输入: pattern = "abba", str = "dog cat cat dog"
输出: true
示例 2:
输入:pattern = "abba", str = "dog cat cat fish"
输出: false
示例 3:
输入: pattern = "aaaa", str = "dog cat cat dog"
输出: false
示例 4:
输入: pattern = "abba", str = "dog dog dog dog"
输出: false
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/word-pattern
*/
class Solution {
public:
    bool wordPattern(string pattern, string str) {
        vector<string> ret;
        int j = 0;
        string s;
        /*
        while(j < str.size())
        {
            if(str[j] == ' ')
            {
                if(s.size())
                    ret.push_back(s);
                s = "";
            } 
            else
            {
                s += str[j];
                if(j == str.size() - 1)
                    ret.push_back(s);
            }
            ++j;
        }
        */
        stringstream out(str);
        while(out >> s)
            ret.push_back(s);
        
        if(pattern.size() != ret.size())
            return false;
        
        unordered_map<char, string> map1;
        unordered_map<string, char> map2;
        for(int i = 0; i < ret.size(); ++i)
        {
            map1[pattern[i]] = ret[i];
            map2[ret[i]] = pattern[i];
        }
        
        for(int i = 0; i < ret.size(); ++i)
        {
            if(map1[pattern[i]] != ret[i] || map2[ret[i]] != pattern[i])
                return false;
        }
        
        
        return true;
    }
};