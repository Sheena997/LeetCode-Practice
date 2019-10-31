/*
两地调度
公司计划面试 2N 人。第 i 人飞往 A 市的费用为 costs[i][0]，飞往 B 市的费用为 costs[i][1]。

返回将每个人都飞到某座城市的最低费用，要求每个城市都有 N 人抵达。
示例：

输入：[[10,20],[30,200],[400,50],[30,20]]
输出：110
解释：
第一个人去 A 市，费用为 10。
第二个人去 A 市，费用为 30。
第三个人去 B 市，费用为 50。
第四个人去 B 市，费用为 20。

最低总费用为 10 + 30 + 50 + 20 = 110，每个城市都有一半的人在面试。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/two-city-scheduling
*/
/*按A市费用 - B市费用排序，前一半去A，后一半去B。*/
class Solution {
public:
    static bool cmp(vector<int> &a, vector<int> &b)
    {
        return (a[0] - a[1]) < (b[0] - b[1]);
    }
    int twoCitySchedCost(vector<vector<int>>& costs) {
        vector<int> v;
        int sum = 0;
        sort(costs.begin(), costs.end(), cmp);//costs[i][0] - costs[i][1]从小到大排序
        for(int i = 0; i < costs.size(); ++i)
        {
            if(i < (costs.size() / 2))
                sum += costs[i][0];
            else
                sum += costs[i][1];
        }
        return sum;
    }
};