/*
������ 16.10. ��������
����N���˵ĳ�����ݺ�������ݣ���i���˵ĳ������Ϊbirth[i]��
�������Ϊdeath[i]��ʵ��һ�������Լ�����������������ݡ�
����Լ��������˶�������1900����2000�꣨��1900��2000��֮�䡣
���һ������ĳһ�������ʱ�ڶ���������״̬����ô����Ӧ�ñ�
������һ���ͳ���С����磬����1908�ꡢ����1909�����Ӧ����
����1908���1909��ļ�����
����ж���������������ͬ�Ҿ�Ϊ���ֵ�����������С����ݡ�
ʾ����
���룺
birth = {1900, 1901, 1950}
death = {1948, 1951, 2000}
����� 1901
��ʾ��

0 < birth.length == death.length <= 10000
birth[i] <= death[i]

��Դ��LeetCode
���ӣ�https://leetcode-cn.com/problems/living-people-lcci/
*/
class Solution {
public:
    int maxAliveYear(vector<int>& birth, vector<int>& death) {
        unordered_map<int, int> mp;
        for(auto e : birth)
            ++mp[e - 1900];
        for(auto e : death)
            --mp[e - 1899];
        int max = 0, res = 0, ret = 0;
        for(int i = 0; i < 101; ++i)
        {
            ret += mp[i];
            if(ret > max)
            {
                max = ret;
                res = 1900 + i;
            }
        }
        
        return res;
    }
};