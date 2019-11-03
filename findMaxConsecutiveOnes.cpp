/*
�������1�ĸ���
����һ�����������飬 ���������������1�ĸ�����

ʾ�� 1:

����: [1,1,0,1,1,1]
���: 3
����: ��ͷ����λ��������λ��������1�������������1�ĸ����� 3.

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/max-consecutive-ones
*/
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int sum = 0;
        int max = 0;
        for(int i = 0; i < nums.size(); ++i)
        {
            if(nums[i] == 1)
            {
                sum += 1;
                if(max < sum)
                    max = sum;
            }
            else
            {
                sum = 0;
            }
        }
        return max;
    }
};
