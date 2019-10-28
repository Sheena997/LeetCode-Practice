/*
我们来定义一个函数f(s)，其中传入参数s是一个非空字符串；该函数的功能是统计s中（按字典序比较）最小字母的出现频次。

例如，若s = "dcce"，那么f(s) = 2，因为最小的字母是"c"，它出现了2 次。

现在，给你两个字符串数组待查表queries和词汇表words，请你返回一个整数数组answer作为答案，其中每个answer[i]是满足f(queries[i])< f(W)的词的数目，W是词汇表words中的词。

示例 1：

输入：queries = ["cbd"], words = ["zaaaz"]
输出：[1]
解释：查询 f("cbd") = 1，而 f("zaaaz") = 3 所以 f("cbd") < f("zaaaz")。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/compare-strings-by-frequency-of-the-smallest-character

*/
//先将每个字符串中最小字母出现的次数存储起来，然后在比较
class Solution {
public:
    int f(string& s)
    {
        int sum = 1;
        char tmp = s[0];
        for(int i = 1; i < s.size(); ++i)
        {
            if(tmp == s[i])
            {
                ++sum;
            }
            else if(tmp > s[i])
            {
                sum = 1;
                tmp = s[i];
            }
        }
        return sum;
    }
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        vector<int> res(queries.size());
        vector<int> ret(words.size());
        for(int i = 0; i < queries.size(); ++i)
        {
            res[i] = f(queries[i]);
        }
        for(int i = 0; i < words.size(); ++i)
        {
            ret[i] = f(words[i]);
        }
        vector<int> sum(queries.size());
        for(int i = 0; i < queries.size(); ++i)
        {
            for(int j = 0; j < words.size(); ++j)
            {
                if(res[i] < ret[j])
                    ++sum[i];
            }
        }
        return sum;
    }

};

