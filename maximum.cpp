/*
������ 16.07. �����ֵ
��дһ���������ҳ���������a��b��������һ��������ʹ��if-else�������Ƚ��������

ʾ����

���룺 a = 1, b = 2
����� 2

��Դ��LeetCode
���ӣ�https://leetcode-cn.com/problems/maximum-lcci/
*/
class Solution {
public:
    int maximum(int a, int b) {
        return ((long)((long)a + (long)b) + abs((long)a - (long)b)) / 2;
    }
};