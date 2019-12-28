/*
验证外星语词典
某种外星语也使用英文小写字母，但可能顺序 order 不同。字母表的顺序（order）是一些小写字母的排列。
给定一组用外星语书写的单词 words，以及其字母表的顺序 order，只有当给定的单词在这种外星语中按字典序排列时，返回 true；否则，返回 false。
示例 1：
输入：words = ["hello","leetcode"], order = "hlabcdefgijkmnopqrstuvwxyz"
输出：true
解释：在该语言的字母表中，'h' 位于 'l' 之前，所以单词序列是按字典序排列的。
示例 2：
输入：words = ["word","world","row"], order = "worldabcefghijkmnpqstuvxyz"
输出：false
解释：在该语言的字母表中，'d' 位于 'l' 之后，那么 words[0] > words[1]，因此单词序列不是按字典序排列的。
示例 3：
输入：words = ["apple","app"], order = "abcdefghijklmnopqrstuvwxyz"
输出：false
解释：当前三个字符 "app" 匹配时，第二个字符串相对短一些，然后根据词典编纂规则 "apple" > "app"，因为 'l' > '∅'，其中 '∅' 是空白字符，定义为比任何其他字符都小（更多信息）
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/verifying-an-alien-dictionary
*/
//str.find()返回找到位置的迭代器，找不到返回-1
class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        string res = " ";
        res += order;
        for(int i = 1; i < words.size(); ++i)
        {
            string ret1 = words[i - 1];
            string ret2 = words[i];
            if(ret1.size() < ret2.size())
                ret1 += " ";
            else if(ret1.size() > ret2.size())
                ret2 += " ";
            int j = 0;
            while(j < ret1.size() && j < ret2.size() && ret1[j] == ret2[j])
                ++j;
            if(res.find(ret1[j]) > res.find(ret2[j]))
                return false;
        }
        
        return true;
    }
};

/*
 //使用unordered_map
        unordered_map<char, int> tool;
        for(int i = 0; i < order.size(); ++i)
        {
            tool[order[i]] = i;
        }
        
        for(int i = 0; i < words.size() - 1; ++i)
        {
            for(int j = 0; j < words[i].size(); ++j)
            {
                if(j >= words[i + 1].size())
                    return false;
                else if(tool[words[i][j]] > tool[words[i + 1][j]])
                    return false;
                else if(tool[words[i][j]] == tool[words[i + 1][j]])
                    continue;
                else 
                    break;
            }
        }
        
        return true;
*/

