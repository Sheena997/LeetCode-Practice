/*
720. 词典中最长的单词
给出一个字符串数组words组成的一本英语词典。从中找出最长的一个单词，该单词
是由words词典中其他单词逐步添加一个字母组成。若其中有多个可行的答案，则返回答案中字典序最小的单词。
若无答案，则返回空字符串。
示例 1:
输入: 
words = ["w","wo","wor","worl", "world"]
输出: "world"
解释: 
单词"world"可由"w", "wo", "wor", 和 "worl"添加一个字母组成。
示例 2:
输入: 
words = ["a", "banana", "app", "appl", "ap", "apply", "apple"]
输出: "apple"
解释: 
"apply"和"apple"都能由词典中的单词组成。但是"apple"得字典序小于"apply"。
*/
class Solution {
public:
    static bool cmp(string p, string q)
    {
        if(p.size() == q.size())
            return p > q;
        
        return p.size() < q.size();
    }
    string longestWord(vector<string>& words) {
        set<string> ret;
        string res;
        for(int i = 0; i < words.size(); ++i)
            ret.insert(words[i]);
        sort(words.begin(), words.end(), cmp);
        
        for(int i = words.size() - 1; i >= 0; --i)
        {
            string tmp = words[i];
            int j = tmp.size();
            while(j--)
            {
                tmp.pop_back();
                if(ret.find(tmp) == ret.end())
                    break;
            }
            
            if(j == 0)
            {
                res = words[i];
                break;
            }
        }
        
        
        return res;
    }
};