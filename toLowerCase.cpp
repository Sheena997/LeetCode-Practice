/*
实现函数 ToLowerCase()，该函数接收一个字符串参数 str，
并将该字符串中的大写字母转换成小写字母，之后返回新的字符串。
示例 1：

输入: "Hello"
输出: "hello"

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/to-lower-case/
*/

class Solution {
public:
    string toLowerCase(string str) {
        string s = "";
        for(auto &i : str)
		//大写变小写、小写变大写 : 字符 ^= 32;大写变小写、小写变小写 : 字符 |= 32;小写变大写、大写变大写 : 字符 &= -33;
        {
            i |= 32;
        }
        s = str;
        return s;
    }
};

