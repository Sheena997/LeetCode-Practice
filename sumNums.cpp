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
//方法一：帅气！
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
//方法二：构造函数
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
int conSum::n = 0;//静态成员在类外进行初始化
int conSum::sum = 0;
class Solution {
public:
    int sumNums(int n) {
        conSum::n = 0;
        conSum::sum = 0;
        conSum *res = new conSum[n];//构造n个对象
        
        return conSum::GetSum();
    }
};



//方法一：帅气！
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
//方法二：构造函数
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
int conSum::n = 0;//静态成员在类外进行初始化
int conSum::sum = 0;
class Solution {
public:
    int sumNums(int n) {
        conSum::n = 0;
        conSum::sum = 0;
        conSum *res = new conSum[n];//构造n个对象
        
        return conSum::GetSum();
    }
};



