/*
1395. ͳ����ս��λ��
 n ��ʿ��վ��һ�š�ÿ��ʿ������һ�� ��һ�޶� ������ rating ��
ÿ 3 ��ʿ���������һ����ս��λ������������£�
�Ӷ�����ѡ���±�ֱ�Ϊ i��j��k �� 3 ��ʿ�������ǵ����ֱַ�Ϊ rating[i]��rating[j]��rating[k]
��ս��λ�����㣺 rating[i] < rating[j] < rating[k] ���� rating[i] > rating[j] > rating[k] ������  0 <= i < j < k < n
���㷵�ذ��������������齨����ս��λ������ÿ��ʿ���������Ƕ����ս��λ��һ���֡�
ʾ�� 1��
���룺rating = [2,5,3,4,1]
�����3
���ͣ����ǿ����齨������ս��λ (2,3,4)��(5,4,1)��(5,3,1) ��
ʾ�� 2��
���룺rating = [2,1,3]
�����0
���ͣ�������Ŀ�����������޷��齨��ս��λ��
ʾ�� 3��
���룺rating = [1,2,3,4]
�����4
��ʾ��
n == rating.length
1 <= n <= 200
1 <= rating[i] <= 10^5

��Դ��LeetCode
���ӣ�https://leetcode-cn.com/problems/count-number-of-teams/
*/
class Solution {
public:
    int numTeams(vector<int>& rating) {
        int res = 0;
        if(rating.size() < 3)
            return 0;
        
        for(int i = 0; i < rating.size() - 2; ++i)
        {
            for(int j = i + 1; j < rating.size() - 1; ++j)
            {
                for(int k = j; k < rating.size(); ++k)
                {
                    if(rating[i] < rating[j] && rating[j] <  rating[k])
                        ++res;
                    else if(rating[i] > rating[j] && rating[j] > rating[k])
                        ++res;
                }
            }
        }
        
        return res;
    }
};