/*
字符的最短距离
给定一个字符串 S 和一个字符 C。返回一个代表字符串 S 中每个字符到字符串 S 中的字符 C 的最短距离的数组。
示例 1:
输入: S = "loveleetcode", C = 'e'
输出: [3, 2, 1, 0, 1, 0, 0, 1, 2, 2, 1, 0]
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/shortest-distance-to-a-character
*/
class Solution {
public:
    vector<int> shortestToChar(string S, char C) {
        vector<int> pos(S.size(), -1);
        int pre = -1;
        for(int i = S.size() - 1; i >= 0; --i)
        {
            if(S[i] == C)
            {
                pre = i;
                pos[i] = 0;
            }
            else if(pre != -1)
            {
                pos[i] = pre - i;
            }
        }
        
        pre = -1;
        for(int i = 0; i < S.size(); ++i)
        {
            if(pre != -1)
                pos[i] = min(i - pre, pos[i]);
            if(S[i] == C)
                pre = i;
            if(pos[i] == -1)//若最后一个字符不是C即最后一个出现字符后面还有字符。
                pos[i] = i -pre;
        }
        return pos;
    }
};