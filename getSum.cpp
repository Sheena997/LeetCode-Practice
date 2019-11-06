/*��ʹ�������+ ��-������������a��b֮�͡�
ʾ�� 1:
����: a = 1, b = 2
���: 3
��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/sum-of-two-integers
*/
//�ݹ�
class Solution {
public:
    int getSum(int a, int b) {
        if(b == 0)
            return a;
        unsigned int sum = a ^ b;
        auto carry = ((unsigned int)(a & b)) << 1;
        return getSum(sum, carry);
    }
};
//�ǵݹ�
class Solution {
public:
    int getSum(int a, int b) {
        while(b)
        {
            unsigned int sum = a ^ b;
            auto carry = ((unsigned int) (a & b)) << 1;
            b = carry;
            a = sum;
        }
        return a;
    }
};
