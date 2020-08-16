/*
������ 16.21. ������
���������������飬�뽻��һ����ֵ��ÿ��������ȡһ����ֵ����ʹ��������������Ԫ�صĺ���ȡ�
����һ�����飬��һ��Ԫ���ǵ�һ��������Ҫ������Ԫ�أ��ڶ���Ԫ���ǵڶ���������Ҫ������Ԫ�ء�
���ж���𰸣���������һ�����ɡ�����������������ֵ�����ؿ����顣

ʾ��:

����: array1 = [4, 1, 2, 1, 1, 2], array2 = [3, 6, 3, 3]
���: [1, 3]
ʾ��:

����: array1 = [1, 2, 3], array2 = [4, 5, 6]
���: []
��ʾ��

1 <= array1.length, array2.length <= 100000
ͨ������3,437�ύ����7,758

��Դ��LeetCode
���ӣ�https://leetcode-cn.com/problems/sum-swap-lcci/
*/
class Solution {
public:
    vector<int> findSwapValues(vector<int>& array1, vector<int>& array2) {
        unordered_set<int> unst(array1.begin(), array1.end());
        int sum1 = 0, sum2 = 0;
        for(auto e : array1)
            sum1 += e;
        for(auto e : array2)
            sum2 += e;
        
        int ret = sum1 - sum2;
        if(ret % 2 != 0)
            return {};
        
        ret >>= 1;
        
        for(auto i : array2)
        {
            if(unst.count(i + ret))
                return {i + ret, i};
        }
        
        return {};
    }
};