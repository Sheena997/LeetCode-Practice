/*
������64. ��1+2+��+n
�� 1+2+...+n ��Ҫ����ʹ�ó˳�����for��while��if��else��switch��case�ȹؼ��ּ������ж���䣨A?B:C����
ʾ�� 1��
����: n = 3
���: 6
ʾ�� 2��
����: n = 9
���: 45
���ƣ�
1 <= n <= 10000

��Դ��LeetCode
���ӣ�https://leetcode-cn.com/problems/qiu-12n-lcof/
*/
class Solution {
public:
    int sumNums(int n) {
        //return ((int)pow(n, 2) + n) >> 1;
        
        n && (n += sumNums(n - 1));
        
        return n;
    }
};
