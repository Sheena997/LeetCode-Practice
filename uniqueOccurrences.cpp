/*
给你一个整数数组 arr，请你帮忙统计数组中每个数的出现次数。
如果每个数的出现次数都是独一无二的，就返回 true；否则返回 false。
示例 1：
输入：arr = [1,2,2,1,1,3]
输出：true
解释：在该数组中，1 出现了 3 次，2 出现了 2 次，3 只出现了 1 次。没有两个数的出现次数相同。
示例 2：
输入：arr = [1,2]
输出：false
示例 3：
输入：arr = [-3,0,1,-3,1,1,1,-3,10,0]
输出：true
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/unique-number-of-occurrences
*/
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> m;
        set<int> s;
        //将数组放入map中
        for(auto e : arr)
        {
            if(m.find(e) != m.end())
                ++m[e];
            else
                m.insert(pair<int, int>(e, 0));
        }
        
        auto p = m.begin();
        while(p != m.end())
        {
            if(s.count(p->second))
                return false;
            s.insert(p->second);
            
            ++p;
        }
        return true;
    }
};