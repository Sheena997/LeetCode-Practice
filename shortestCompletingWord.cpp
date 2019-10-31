/*
如果单词列表（words）中的一个单词包含牌照（licensePlate）中所有的字母，那么我们称之为完整词。在所有完整词中，最短的单词我们称之为最短完整词。

单词在匹配牌照中的字母时不区分大小写，比如牌照中的?"P"?依然可以匹配单词中的?"p"?字母。

我们保证一定存在一个最短完整词。当有多个单词都符合最短完整词的匹配条件时取单词列表中最靠前的一个。

牌照中可能包含多个相同的字符，比如说：对于牌照 "PP"，单词?"pair"?无法匹配，但是?"supper"?可以匹配。

?

示例 1：

输入：licensePlate = "1s3 PSt", words = ["step", "steps", "stripe", "stepple"]
输出："steps"
说明：最短完整词应该包括 "s"、"p"、"s" 以及 "t"。对于 "step" 它只包含一个 "s" 所以它不符合条件。同时在匹配过程中我们忽略牌照中的大小写。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/shortest-completing-word
*/

class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        vector<int> v(26, 0);
        string res = "";
        res.resize(10);
        for(auto e:licensePlate)
        {
            if((e >= 'a' && e <= 'z') || (e >= 'A' && e <= 'Z'))
            {
                e |= 32;
                ++v[e - 'a'];
            }
        }
        for(int i = 0; i < words.size(); ++i)
        {
            vector<int> a(26, 0);
            int flag = 0;
            for(int j = 0; j < words[i].size(); ++j)
            {
                ++a[words[i][j] - 'a'];
            }
            for(int k = 0; k < 26; ++k)
            {
                if(v[k] != 0 && a[k] < v[k])
                {
                    flag = 1;
                    break;
                }
            }
            if(flag == 0)
                res = res.size() > words[i].size() ? words[i] : res;
        }
        return res;
    }
};