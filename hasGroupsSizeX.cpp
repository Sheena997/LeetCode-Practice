/*
给定一副牌，每张牌上都写着一个整数。
此时，你需要选定一个数字 X，使我们可以将整副牌按下述规则分成 1 组或更多组：
每组都有 X 张牌。
组内所有的牌上都写着相同的整数。
仅当你可选的 X >= 2 时返回 true。
示例 1：
输入：[1,2,3,4,4,3,2,1]
输出：true
解释：可行的分组是 [1,1]，[2,2]，[3,3]，[4,4]
示例 2：
输入：[1,1,1,2,2,2,3,3]
输出：false
解释：没有满足要求的分组。
示例 3：
输入：[1]
输出：false
解释：没有满足要求的分组。
示例 4：
输入：[1,1]
输出：true
解释：可行的分组是 [1,1]
示例 5：
输入：[1,1,2,2,2,2]
输出：true
解释：可行的分组是 [1,1]，[2,2]，[2,2]
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/x-of-a-kind-in-a-deck-of-cards
*/
class Solution {
public:
    int gcd(int p, int q)
    {
        return p % q == 0 ? q : gcd(q, p % q);
    }
    
    bool hasGroupsSizeX(vector<int>& deck) {
        map<int, int> mp;
        int tmp = 0;
        for(auto e : deck)
        {
            ++mp[e];
            tmp = mp[e];
        }
       
        for(auto k : mp)
        {
            tmp = gcd(tmp, k.second);
        }
        
        if(tmp <= 1)
            return false;
        return true;
    }
};