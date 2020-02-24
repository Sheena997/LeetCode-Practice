/*
1018. �ɱ� 5 �����Ķ�����ǰ׺
���������� 0 �� 1 ��ɵ����� A�����Ƕ��� N_i���� A[0] �� A[i] �ĵ� i �������鱻����Ϊһ�������������������Чλ�������Чλ����
���ز���ֵ�б� answer��ֻ�е� N_i ���Ա� 5 ����ʱ���� answer[i] Ϊ true������Ϊ false��
ʾ�� 1��
���룺[0,1,1]
�����[true,false,false]
���ͣ�
��������Ϊ 0, 01, 011��Ҳ����ʮ�����е� 0, 1, 3 ��ֻ�е�һ�������Ա� 5 ��������� answer[0] Ϊ�档
ʾ�� 2��
���룺[1,1,1]
�����[false,false,false]
ʾ�� 3��
���룺[0,1,1,1,1,1]
�����[true,false,false,false,true,false]
ʾ�� 4��
���룺[1,1,1,0,1]
�����[false,false,false,false,false]
��Դ��LeetCode
���ӣ�https://leetcode-cn.com/problems/binary-prefix-divisible-by-5/
*/
class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& A) {
        vector<bool> res;
        int ret = 0;
        for(int i = 0; i < A.size(); ++i)
        {
            ret = (ret * 2 + A[i]) % 5;
            if(ret % 5 == 0)
                res.push_back(true);
            else 
                res.push_back(false);
        }
        
        return res;
    }
};