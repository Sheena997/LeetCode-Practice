/*
����һ��δ��������������飬�ҵ���������ĵĵ������С�
ʾ�� 1:
����: [1,3,5,4,7]
���: 3
����: ��������������� [1,3,5], ����Ϊ3��
���� [1,3,5,7] Ҳ�������������, �������������ģ���Ϊ5��7��ԭ�����ﱻ4������ 
ʾ�� 2:
����: [2,2,2,2,2]
���: 1
����: ��������������� [2], ����Ϊ1��
��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/longest-continuous-increasing-subsequence

*/
class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        int res = 0;
        int count = 0;
        for(int i = 1; i < nums.size(); ++i)
        {
            if(nums[i] > nums[i - 1])
                ++count;
            else
            {
                count = 0;
            }
            if(count > res)
                res = count;
        }
        
        return ++res;
    }
};