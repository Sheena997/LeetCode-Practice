/*
给定两个句子 A 和 B 。 （句子是一串由空格分隔的单词。每个单词仅由小写字母组成。）
如果一个单词在其中一个句子中只出现一次，在另一个句子中却没有出现，那么这个单词就是不常见的。
返回所有不常用单词的列表。
您可以按任何顺序返回列表。
示例 1：
输入：A = "this apple is sweet", B = "this apple is sour"
输出：["sweet","sour"]
示例 2：
输入：A = "apple apple", B = "banana"
输出：["banana"]
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/uncommon-words-from-two-sentences
*/
//map的使用stringstream的使用
class Solution {
public:
    vector<string> uncommonFromSentences(string A, string B) {
        map<string, int> hashMap;
        vector<string> res;
       /*//自己的 
        string s = A + " " + B;
        for(int i = 0; i < s.size(); ++i)
        {
            string ret;
            while(i < s.size() && s[i] != ' ')
            {
                ret += s[i];
                ++i;
            }
            
            res.push_back(ret);
        }
        
        for(auto e : res)
        {
            ++hashMap[e];
        }
        res.clear();
        */
        //看了评论的
        stringstream s(A + " " + B);
        string str;
        while(s >> str)
            ++hashMap[str];
        auto it = hashMap.begin();
        while(it != hashMap.end())
        {
            if(it->second == 1)
                res.push_back(it->first);
            ++it;
        }
        
        return res;
    }
};




