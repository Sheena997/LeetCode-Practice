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

//����һ����ѧ��ʽ��
class Solution {
public:
    int Sum_Solution(int n) {
        return n * (n + 1) / 2;
    }
};



//�����������캯����̬��Ա������
class Tmp
{
public:
    Tmp()
    {
        _sum += _n;
        ++_n;
    }
    static void ReSet()
    {
        _n = 1;
        _sum = 0;
    }
    static int GetSum()
    {
        return _sum;
    }
private:
    static unsigned int _n;
    static unsigned int _sum;
};

unsigned int Tmp::_n = 1;
unsigned int Tmp::_sum = 0;

class Solution {
public:
    int Sum_Solution(int n) {
        Tmp::ReSet();
        
        Tmp* a = new Tmp[n];
        delete[] a;
        a = NULL;
        
        return Tmp::GetSum();
    }
};



//������������ģ�壺�����1 + ... + 10����������������
template<int N>
class Sum
{
public:
    enum
    {
        RET = Sum<N - 1>::RET + N
    };
};

template<>
class Sum<1>
{
public:
    enum
    {
        RET = 1
    };
};

class Solution {
public:
    int Sum_Solution(int n) {
        
        return Sum<10>::RET;
    }
};


//�����ģ��ݹ�
class Solution {
public:
    int Sum_Solution(int n) {
        if(n == 1)
            return 1;
        return n + Sum_Solution(n - 1);
    }
};



//�����壺˧����

class Solution {
public:
    int sumNums(int n) {
        //return ((int)pow(n, 2) + n) >> 1;
        n && (n += sumNums(n - 1));
        
        return n;
    }
};



