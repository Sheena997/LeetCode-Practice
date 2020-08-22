/*
������ 05.04. ��һ����
��һ����������һ�����������ҳ���������Ʊ��ʽ��1�ĸ�����ͬ
�Ҵ�С��ӽ�������������һ���Դ�һ����С����

ʾ��1:
 ���룺num = 2������0b10��
 �����[4, 1] ���ߣ�[0b100, 0b1]��
ʾ��2:
 ���룺num = 1
 �����[2, -1]
��ʾ:

num�ķ�Χ��[1, 2147483647]֮�䣻
����Ҳ���ǰһ�����ߺ�һ��������������������ô��� -1��

��Դ��LeetCode
���ӣ�https://leetcode-cn.com/problems/closed-number-lcci/
*/
class Solution {
public:
    int countTheOneNum(long n)
    {
        int count = 0;
        while(n)
        {
            n &= (n - 1);
            ++count;
        }
        
        return count;
    }
    vector<int> findClosedNumbers(long num) {
        vector<int> res;
        int count = countTheOneNum(num);
        for(long i = num + 1; i <= 2 * num; ++i)
        {
            if(countTheOneNum(i) == count)
            {
                res.push_back(i);
                break;
            }
        }
        for(long i = num - 1; i >= 1; --i)
        {
            if(countTheOneNum(i) == count)
            {
                res.push_back(i);
                break;
            }
        }
        if(res.size() < 2)
            res.push_back(-1);
        
        return res;
    }
};