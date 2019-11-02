/*
报数
报数序列是一个整数序列，按照其中的整数的顺序进行报数，得到下一个数。其前五项如下：
1.     1
2.     11
3.     21
4.     1211
5.     111221
1?被读作??"one 1"("一个一") , 即?11。
11 被读作?"two 1s"("两个一"）, 即?21。
21 被读作?"one 2", ?"one 1"?（"一个二"?,??"一个一")?, 即?1211。
给定一个正整数 n（1 ≤?n?≤ 30），输出报数序列的第 n 项.
注意：整数顺序将表示为一个字符串。
示例 1:
输入: 1
输出: "1"
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/count-and-say
*/
//第一项为1，第二项：第一项中有一个1故为11，第三项：第二项中有两个1故为21
class Solution {
public:
    string countAndSay(int n) {
        if(n == 1)
            return "1";
        string s = countAndSay(n - 1);
        int count = 1;
        string res;
        for(int i = 0; i < s.size(); ++i)
        {
            if(s[i] == s[i + 1])
            {
                ++count;
            }
            else 
            {
                res += (to_string(count) + s[i]);
                count = 1;
            }
        }
        return res;
    }
};
