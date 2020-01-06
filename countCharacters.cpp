/*
给你一份『词汇表』（字符串数组） words 和一张『字母表』（字符串） chars。
假如你可以用 chars 中的『字母』（字符）拼写出 words 中的某个『单词』（字符串），那么我们就认为你掌握了这个单词。
注意：每次拼写时，chars 中的每个字母都只能用一次。
返回词汇表 words 中你掌握的所有单词的 长度之和。
示例 1：
输入：words = ["cat","bt","hat","tree"], chars = "atach"
输出：6
解释： 
可以形成字符串 "cat" 和 "hat"，所以答案是 3 + 3 = 6。
示例 2：
输入：words = ["hello","world","leetcode"], chars = "welldonehoneyr"
输出：10
解释：
可以形成字符串 "hello" 和 "world"，所以答案是 5 + 5 = 10。
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/find-words-that-can-be-formed-by-characters
*/
class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> hashWord(26, 0);
        for(auto e : chars)
        {
            ++hashWord[e - 'a'];
        }
       
        int count = 0;
        
        for(int i = 0; i < words.size(); ++i)
        {
            vector<int> tmp = hashWord;
            string ret = words[i];
            int flag = 0;
            for(int j = 0; j < ret.size(); ++j)
            {
                if(tmp[ret[j] - 'a'] == 0)
                {
                    flag = 1;
                    break;
                }
                else
                    --tmp[ret[j] - 'a'];
            }
            
            if(flag == 0)
            {
                count += ret.size();
            }
        }
        
        return count;
    }
};




