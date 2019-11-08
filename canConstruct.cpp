/*
给定一个赎金信 (ransom) 字符串和一个杂志(magazine)字符串，判断第一个字符串ransom能不能由第二个字符
串magazines里面的字符构成。如果可以构成，返回 true ；否则返回 false。
(题目说明：为了不暴露赎金信字迹，要从杂志上搜索各个需要的字母，组成单词来表达意思。)
注意：
你可以假设两个字符串均只含有小写字母。
canConstruct("a", "b") -> false
canConstruct("aa", "ab") -> false
canConstruct("aa", "aab") -> true
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/ransom-note
*/
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> v1(26,0);
        vector<int> v2(26,0);
        for(int i = 0; i < ransomNote.size(); ++i)
        {
            ++v1[ransomNote[i] - 'a'];
        }
        for(int i = 0; i < magazine.size(); ++i)
        {
            ++v2[magazine[i] - 'a'];
        }
        for(int i = 0; i < 26; ++i)
        {
            if(v1[i] > v2[i])
                return false;
        }
        return true;
    }
};
