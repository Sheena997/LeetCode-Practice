/*Bigram 分词（将string转成vector<string>为了比较两个字符串是否相同）
给出第一个词?first 和第二个词?second，考虑在某些文本?text?中可能以 "first second third" 形式出现的情况，其中?second?紧随?first?出现，third?紧随?second?出现。

对于每种这样的情况，将第三个词 "third" 添加到答案中，并返回答案。


示例 1：

输入：text = "alice is a good girl she is a good student", first = "a", second = "good"
输出：["girl","student"]

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/occurrences-after-bigram

*/
class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string> ret;
        vector<string> v;
        string s;
        /*将string转成vector<string>*/
        for(auto it = text.begin(); it != text.end(); ++it)
        {
            char c = *it;
            if(*it != ' ')
                s += c;
            else
            {
                v.push_back(s);
                s = "";
            }
            if(it == text.end() - 1)
                v.push_back(s);
        }
        for(int i = 0; i < v.size() - 2; ++i)
        {
            if(v[i] == first && v[i + 1] == second)
                ret.push_back(v[i + 2]);
        }
        return ret;
    }
};
