/*
排序即可。
给定两个字符串 s 和 t ，编写一个函数来判断 t 是否是 s 的字母异位词。
示例1:

输入: s = "anagram", t = "nagaram"
输出: true
示例 2:

输入: s = "rat", t = "car"
输出: false

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/valid-anagram
*/
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());//将两个字符串排序
        sort(t.begin(), t.end());
        return s == t;
    }
};
