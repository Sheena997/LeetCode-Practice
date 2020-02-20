/*
1317. ������ת��Ϊ�������������ĺ�
��������������ʮ���Ʊ�ʾ�� �����κ� 0 ����������
����һ������ n�����㷵��һ�� ������������ɵ��б� [A, B]�����㣺
A �� B ������������
A + B = n
��Ŀ���ݱ�֤������һ����Ч�Ľ��������
������ڶ����Ч�������������Է�����������һ����
ʾ�� 1��
���룺n = 2
�����[1,1]
���ͣ�A = 1, B = 1. A + B = n ���� A �� B ��ʮ���Ʊ�ʾ��ʽ���������κ� 0 ��
ʾ�� 2��
���룺n = 11
�����[2,9]
ʾ�� 3��
���룺n = 10000
�����[1,9999]
ʾ�� 4��
���룺n = 69
�����[1,68]
ʾ�� 5��
���룺n = 1010
�����[11,999]
��ʾ��
2 <= n <= 10^4
��Դ��������
���ӣ�https://leetcode-cn.com/problems/convert-integer-to-the-sum-of-two-no-zero-integers/
*/
class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        vector<int> res;
        
        while(true)
        {
            int num1 = rand() % n + 1;
            int num2 = n - num1;
            string str1 = to_string(num1);
            string str2 = to_string(num2);
            
            if(str1.find('0') == str1.npos 
            && str2.find('0') == str2.npos)
            {
                res.push_back(num1);
                res.push_back(num2);
                break;
            }
        }
        
        return res;
    }
};