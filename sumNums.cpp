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
//����һ��˧����
/*
class Solution {
public:
    int sumNums(int n) {
        //return ((int)pow(n, 2) + n) >> 1;
        n && (n += sumNums(n - 1));
        
        return n;
    }
};
*/
//�����������캯��
class conSum
{
public:
    conSum()
    {
        ++n;
        sum += n;
    }
    static int GetSum()
    {
        return sum;
    }
    static int n;
    static int sum;
};
int conSum::n = 0;//��̬��Ա��������г�ʼ��
int conSum::sum = 0;
class Solution {
public:
    int sumNums(int n) {
        conSum::n = 0;
        conSum::sum = 0;
        conSum *res = new conSum[n];//����n������
        
        return conSum::GetSum();
    }
};



//����һ��˧����
/*
class Solution {
public:
    int sumNums(int n) {
        //return ((int)pow(n, 2) + n) >> 1;
        n && (n += sumNums(n - 1));
        
        return n;
    }
};
*/
//�����������캯��
class conSum
{
public:
    conSum()
    {
        ++n;
        sum += n;
    }
    static int GetSum()
    {
        return sum;
    }
    static int n;
    static int sum;
};
int conSum::n = 0;//��̬��Ա��������г�ʼ��
int conSum::sum = 0;
class Solution {
public:
    int sumNums(int n) {
        conSum::n = 0;
        conSum::sum = 0;
        conSum *res = new conSum[n];//����n������
        
        return conSum::GetSum();
    }
};



