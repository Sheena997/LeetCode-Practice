/*
������ 08.06. ��ŵ������
�ھ��人ŵ�������У��� 3 �����Ӽ� N ����ͬ��С�Ĵ���Բ�̣����ӿ��Ի�������һ�����ӡ�һ��ʼ��
�����������϶��°������������ڵ�һ��������(��ÿһ������ֻ�ܷ��ڸ������������)���ƶ�Բ��ʱ
�ܵ���������:
(1) ÿ��ֻ���ƶ�һ������;
(2) ����ֻ�ܴ����Ӷ��˻����Ƶ���һ������;
(3) ����ֻ�ܵ��ڱ�����������ϡ�

���д������ջ���������Ӵӵ�һ�������Ƶ����һ�����ӡ�

����Ҫԭ���޸�ջ��

ʾ��1:

 ���룺A = [2, 1, 0], B = [], C = []
 �����C = [2, 1, 0]
ʾ��2:

 ���룺A = [1, 0], B = [], C = []
 �����C = [1, 0]
��ʾ:

A�����ӵ���Ŀ������14����

��Դ��LeetCode
���ӣ�https://leetcode-cn.com/problems/hanota-lcci/
*/
class Solution {
public:
    void hanota(vector<int>& A, vector<int>& B, vector<int>& C) {
        C = A;
    }
};

class Solution {
public:
    void _hanota(int n, vector<int>& A, vector<int>& B, vector<int>& C)
    {
        if(n == 1)
        {
            C.push_back(A.back());
            A.pop_back();
            return;
        }
        _hanota(n - 1, A, C, B);
        _hanota(1, A, B, C);
        _hanota(n - 1, B, A, C);
        
    }
    void hanota(vector<int>& A, vector<int>& B, vector<int>& C) {
        _hanota(A.size(), A, B, C);
    }
};