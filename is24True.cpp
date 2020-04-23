/*
679. 24 ����Ϸ
���� 4 ��д�� 1 �� 9 ���ֵ��ơ�����Ҫ�ж��Ƿ���ͨ�� *��/��+��-��(��) ������õ� 24��
ʾ�� 1:
����: [4, 1, 8, 7]
���: True
����: (8-4) * (7-1) = 24
ʾ�� 2:
����: [1, 2, 1, 2]
���: False
ע��:
��������� / ��ʾʵ���������������������������� 4 / (1 - 2/3) = 12 ��
ÿ����������������������㡣�ر������ǲ����� - ��ΪһԪ����������磬[1, 1, 1, 1] 
��Ϊ����ʱ�����ʽ -1 - 1 - 1 - 1 �ǲ�����ġ�
�㲻�ܽ�����������һ�����磬����Ϊ [1, 2, 1, 2] ʱ������д�� 12 + 12 ��

��Դ��LeetCode
���ӣ�https://leetcode-cn.com/problems/24-game/
*/
class Solution {
public:
    bool is24True(double *arr, int n)
    {
        if(fabs(arr[0] - 24) < 0.0001 && n == 1)
            return true;
        else if(n > 1)
        {
            for(int i = 0; i < n; ++i)
            {
                for(int j = 0; j < n; ++j)
                {
                    if(i == j)
                        continue;
                    int m = 0;
                    double brr[4];
                    for(int k = 0; k < n; ++k)
                    {
                        if(k != i && k != j)
                            brr[m++] = arr[k];
                    }
                    brr[m] = arr[i] + arr[j];
                    if(is24True(brr, m + 1))
                        return true;
                    brr[m] = arr[i] - arr[j];
                    if(is24True(brr, m + 1))
                        return true;
                    brr[m] = arr[i] * arr[j];
                    if(is24True(brr, m + 1))
                        return true;
                    if(arr[j])
                    {
                        brr[m] = arr[i] / arr[j];
                        if(is24True(brr, m + 1))
                            return true;
                    }
                }
            }
        }
        return false;
    }
    bool judgePoint24(vector<int>& nums) {
        double arr[4];
        for(int i = 0; i < 4; ++i)
            arr[i] = (double)nums[i];
        if(is24True(arr, 4))
            return true;
        else
            return false;
    }
};