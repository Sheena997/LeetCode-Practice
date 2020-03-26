/*
�������⡣�и�С��������¥�ݣ�¥����n��̨�ף�С��һ�ο�����1�ס�2�׻�3�ס�
ʵ��һ�ַ���������С���ж�������¥�ݵķ�ʽ��������ܴܺ�����Ҫ�Խ��ģ1000000007��
ʾ��1:
 ���룺n = 3 
 �����4
 ˵��: �������߷�
ʾ��2:
 ���룺n = 5
 �����13
��ʾ:
n��Χ��[1, 1000000]֮��
��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/three-steps-problem-lcci
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������
*/
class Solution {
public:
    int waysToStep(int n) {
        if(n == 1)
            return 1;
        if(n == 2)
            return 2;
        if(n == 3)
            return 4;
        long long f1 = 1, f2 = 2, f3 = 4;
        for(int i = 4; i <= n; ++i)
        {
            long long f = (f1 + f2 + f3) % 1000000007;
            f1 = f2;
            f2 = f3;
            f3 = f;
        }
        
        return f3;
    }
};