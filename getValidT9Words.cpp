/*
面试题 16.20. T9键盘
在老式手机上，用户通过数字键盘输入，手机将提供与这些数字相匹配的单词列表。
每个数字映射到0至4个字母。给定一个数字序列，实现一个算法来返回匹配单词的列
表。你会得到一张含有有效单词的列表。映射如下图所示：
1:!@#
2:abc
3:def
4:ghi
5:jkl
6:mno
7:pqrs
8:tuv
9:wxyz
*.
0_

示例 1:

输入: num = "8733", words = ["tree", "used"]
输出: ["tree", "used"]
示例 2:

输入: num = "2", words = ["a", "b", "c", "d"]
输出: ["a", "b", "c"]
提示：

num.length <= 1000
words.length <= 500
words[i].length == num.length
num中不会出现 0, 1 这两个数字

来源：LeetCode
链接：https://leetcode-cn.com/problems/t9-lcci/
*/
class Solution {
public:
    vector<string> getValidT9Words(string num, vector<string>& words) {
        vector<string> res;
        
        string dic[10] = {"0", "!@#", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        for(int i = 0; i < words.size(); ++i)
        {
            int count = 0;
            for(int j = 0; j < words[i].size(); ++j)
            {
                if(dic[num[j] - '0'].find(words[i][j]) != string::npos)
                    ++count;
            }
            if(count == words[i].size())
                res.push_back(words[i]);
        }
        
        return res;
    }
};


