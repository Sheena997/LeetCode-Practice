/*
给出 N 名运动员的成绩，找出他们的相对名次并授予前三名对应的奖牌。前三名运动员将会被分别授予 “金牌”，“银牌” 和“ 铜牌”（"Gold Medal", "Silver Medal", "Bronze Medal"）。
(注：分数越高的选手，排名越靠前。)
示例 1:
输入: [5, 4, 3, 2, 1]
输出: ["Gold Medal", "Silver Medal", "Bronze Medal", "4", "5"]
解释: 前三名运动员的成绩为前三高的，因此将会分别被授予 “金牌”，“银牌”和“铜牌” ("Gold Medal", "Silver Medal" and "Bronze Medal").
余下的两名运动员，我们只需要通过他们的成绩计算将其相对名次即可。
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/relative-ranks
*/
class Solution {
public:
    static bool cmp(int a, int b)
    {
        return a > b;
    }
    vector<string> findRelativeRanks(vector<int>& nums) {
        vector<int> ret(nums);
        vector<string> s(nums.size(), "");
        sort(ret.begin(), ret.end(), cmp);
        for(int i = 0; i < nums.size(); ++i)
        {
            if(nums[i] == ret[0])
                s[i] = "Gold Medal";
            else if(nums[i] == ret[1])
                s[i] = "Silver Medal";
            else if(nums[i] == ret[2])
                s[i] = "Bronze Medal";
            else 
            {
                for(int j = 3; j < ret.size(); ++j)
                {
                    if(nums[i] == ret[j])
                    {
                        s[i] = to_string(j + 1);
                        break;
                    }
                }
            }
        }
        return s;
    }
};
