/*
������ 08.05. �ݹ�˷�
�ݹ�˷��� дһ���ݹ麯������ʹ�� * ������� 
ʵ����������������ˡ�����ʹ�üӺš����š�λ�ƣ�
��Ҫ����һЩ��
ʾ��1:
 ���룺A = 1, B = 10
 �����10
ʾ��2:
 ���룺A = 3, B = 4
 �����12
��ʾ:
��֤�˷���Χ�������

��Դ��LeetCode
���ӣ�https://leetcode-cn.com/problems/recursive-mulitply-lcci/
*/
class Solution {
public:
    int multiply(int A, int B) {
        if(A == 0 || B == 0)
            return 0;
        
        if(A < B)
            return B +  multiply(A - 1, B);
        else
            return A +  multiply(A, B - 1);
    }
};