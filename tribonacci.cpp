/*
�� N ��̩��������
̩����������?Tn?�������£�?
T0 = 0, T1 = 1, T2 = 1, ���� n >= 0?�������� Tn+3 = Tn + Tn+1 + Tn+2

��������?n���뷵�ص� n ��̩��������?Tn ��ֵ��
ʾ�� 1��
���룺n = 4
�����4
���ͣ�
T_3 = 0 + 1 + 1 = 2
T_4 = 1 + 1 + 2 = 4

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/n-th-tribonacci-number
*/
//�ǵݹ�
class Solution {
public:
    int tribonacci(int n) {
        if(n == 0 || n == 1 || n == 2)
            return n == 0 ? 0 : 1;
        int n1= 0 , n2 = 1, n3 = 1;
        for(int i = 3; i <= n; ++i)
        {
            int tmp = n1 + n2 + n3;
            n1 = n2;
            n2 = n3;
            n3 = tmp;
        }
        return n3;
    }
};
//�ݹ� ������
class Solution {
public:
    int tribonacci(int n) {
        if(n == 0 || n == 1 || n == 2)
            return n == 0 ? 0 : 1;
        return tribonacci(n - 3) + tribonacci(n -2) + tribonacci(n - 1);
    }
};


