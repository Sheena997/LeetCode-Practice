/*
����һ�����ȹ̶�����������?arr�����㽫�������г��ֵ�ÿ���㶼��дһ�飬���������Ԫ������ƽ�ơ�

ע�⣺�벻Ҫ�ڳ��������鳤�ȵ�λ��д��Ԫ�ء�

Ҫ��������������?�͵�?���������޸ģ���Ҫ�Ӻ��������κζ�����

?

ʾ�� 1��

���룺[1,0,2,3,0,4,5,0]
�����null
���ͣ����ú�������������齫���޸�Ϊ��[1,0,0,2,3,0,0,4]

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/duplicate-zeros
*/
class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        for(int i = 0; i < arr.size(); ++i)
        {
            if(arr[i] == 0)
            {
                for(int j = arr.size() - 1; j > i + 1; --j)
                {
                    arr[j] = arr[j - 1];
                }
                if(i + 1 < arr.size())//�������һ��Ԫ�أ�ֱ��ȥ������Ȼi+1�����
                arr[i + 1] = 0;
                ++i;
            }
        }
    }
};