/*
���ص���
��˾�ƻ����� 2N �ˡ��� i �˷��� A �еķ���Ϊ costs[i][0]������ B �еķ���Ϊ costs[i][1]��

���ؽ�ÿ���˶��ɵ�ĳ�����е���ͷ��ã�Ҫ��ÿ�����ж��� N �˵ִ
ʾ����

���룺[[10,20],[30,200],[400,50],[30,20]]
�����110
���ͣ�
��һ����ȥ A �У�����Ϊ 10��
�ڶ�����ȥ A �У�����Ϊ 30��
��������ȥ B �У�����Ϊ 50��
���ĸ���ȥ B �У�����Ϊ 20��

����ܷ���Ϊ 10 + 30 + 50 + 20 = 110��ÿ�����ж���һ����������ԡ�

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/two-city-scheduling
*/
/*��A�з��� - B�з�������ǰһ��ȥA����һ��ȥB��*/
class Solution {
public:
    static bool cmp(vector<int> &a, vector<int> &b)
    {
        return (a[0] - a[1]) < (b[0] - b[1]);
    }
    int twoCitySchedCost(vector<vector<int>>& costs) {
        vector<int> v;
        int sum = 0;
        sort(costs.begin(), costs.end(), cmp);//costs[i][0] - costs[i][1]��С��������
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