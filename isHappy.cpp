/*
��дһ���㷨���ж�һ�����ǲ��ǡ�����������

һ����������������Ϊ������һ����������ÿһ�ν������滻Ϊ��ÿ��λ���ϵ����ֵ�ƽ���ͣ�Ȼ���ظ��������ֱ���������Ϊ 1��Ҳ����������ѭ����ʼ�ձ䲻�� 1��������Ա�Ϊ 1����ô��������ǿ�������

ʾ��:?

����: 19
���: true
����: 
12 + 92 = 82
82 + 22 = 68
62 + 82 = 100
12 + 02 + 02 = 1

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/happy-number
*/
class Solution {
public:
    bool isHappy(int n) {
        /*//����һ�������ⷨ��ֱ��ѭ��100��
        for(int i = 0; i < 100; ++i)
        {
            int sum = 0;
            while(n)
            {
                sum += ((n % 10) * (n % 10));
                n /= 10;
            }
            n = sum;
            if(sum == 1)
                return true;
            sum = 0;
        }
        return false;
        */
        //���������ݹ� 1-9��ֻ��1��7�ǡ��������������������ǡ�����������
        if(n == 1 || n == 7)
            return true;
        if(n < 10)
            return false;
        int sum = 0;
        while(n) 
        {
            sum += ((n % 10) * (n % 10));
            n /= 10;
        }
        n = sum;
        return isHappy(n);
    }
};
