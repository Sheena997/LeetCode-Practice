/*
686. 重复叠加字符串匹配
给定两个字符串 A 和 B, 寻找重复叠加字符串A的最小次数，使得字符串B成为叠加后的字符串A的子串，如果不存在则返回 -1。
举个例子，A = "abcd"，B = "cdabcdab"。
答案为 3， 因为 A 重复叠加三遍后为 “abcdabcdabcd”，此时 B 是其子串；A 重复叠加两遍后为"abcdabcd"，B 并不是其子串。
来源：LeetCode
链接：https://leetcode-cn.com/problems/repeated-string-match/
*/
class Solution {
public:
    int repeatedStringMatch(string A, string B) {
        int sum = 1;
        string ret = A;
        while(ret.find(B) == -1)
        {
            ret += A;
            ++sum;
            if(ret.size() > B.size() + A.size() && ret.find(B) == -1)
                return -1;
        }
        
        return sum;
    }
};