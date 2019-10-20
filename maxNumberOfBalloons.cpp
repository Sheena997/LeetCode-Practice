/*
给你一个字符串?text，你需要使用 text 中的字母来拼凑尽可能多的单词?"balloon"（气球）。

字符串?text 中的每个字母最多只能被使用一次。请你返回最多可以拼凑出多少个单词?"balloon"。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/maximum-number-of-balloons

*/
class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> v(5,0);
        for(int i = 0; i < text.length(); ++i)
        {
            switch(text[i])
            {
                case 'b': ++v[0];
                          break;
                case 'a': ++v[1];
                          break;
                case 'l': ++v[2];
                          break;
                case 'o': ++v[3];
                          break;
                case 'n': ++v[4];
                          break;
                default:break;
            }
        }
        v[2] /= 2;
        v[3] /= 2;
        sort(v.begin(), v.end());
        return v[0];
    }
};