/*
�������� n����˳���ӡ���� 1 ������ n λʮ���������������� 3�����ӡ�� 1��2��3 һֱ������ 3 λ�� 999��
ʾ�� 1:
����: n = 1
���: [1,2,3,4,5,6,7,8,9]
��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/da-yin-cong-1dao-zui-da-de-nwei-shu-lcof
*/
class Solution {
public:
    vector<int> printNumbers(int n) {
        vector<int> res;
        
        int max = pow(10, n);
        for(int i = 1; i < max; ++i)
        {
            res.push_back(i);
        }
        
        return res;
    }
};