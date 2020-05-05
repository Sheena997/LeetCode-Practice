/*
面试题64. 求1+2+…+n
求 1+2+...+n ，要求不能使用乘除法、for、while、if、else、switch、case等关键字及条件判断语句（A?B:C）。
示例 1：
输入: n = 3
输出: 6
示例 2：
输入: n = 9
输出: 45
限制：
1 <= n <= 10000

来源：LeetCode
链接：https://leetcode-cn.com/problems/qiu-12n-lcof/
*/

//方法一：数学公式：
class Solution {
public:
    int Sum_Solution(int n) {
        return n * (n + 1) / 2;
    }
};



//方法二：构造函数静态成员变量。
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



//方法三：函数模板：如果是1 + ... + 10或者其它具体数字
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


//方法四：递归
class Solution {
public:
    int Sum_Solution(int n) {
        if(n == 1)
            return 1;
        return n + Sum_Solution(n - 1);
    }
};



//方法五：帅气！

class Solution {
public:
    int sumNums(int n) {
        //return ((int)pow(n, 2) + n) >> 1;
        n && (n += sumNums(n - 1));
        
        return n;
    }
};



