/*
给定一个非空字符串 s，最多删除一个字符。判断是否能成为回文字符串。
示例 1:
输入: "aba"
输出: True
示例 2:
输入: "abca"
输出: True
解释: 你可以删除c字符。
注意:
字符串只包含从 a-z 的小写字母。字符串的最大长度是50000。
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/valid-palindrome-ii
*/
class Solution {
public:
    bool validPalindrome(string s) {
        int i = 0, j = s.size() - 1;
        
        while(i < j)
        {
            if(s[i] != s[j])
                return valid(s, i + 1, j) || valid(s, i, j - 1);
            ++i;
            --j;
        }
        
        return true;
    }
    
    bool valid(string& s, int i, int j)
    {
        while(i < j)
        {
            if(s[i] != s[j])
                return false;
            ++i;
            --j;
        }
        
        return  true;
    }
};