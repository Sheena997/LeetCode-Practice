/*
����һ������ nums����дһ������������ 0 �ƶ��������ĩβ��ͬʱ���ַ���Ԫ�ص����˳��

ʾ��:

����: [0,1,0,3,12]
���: [1,3,12,0,0]

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/move-zeroes
*/
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //����ָ��
        int i = 0;
        for(int j = 0; j < nums.size(); ++j)
        {
            if(nums[j] != 0)
            {
                nums[i] = nums[j];
                ++i;
            }
        }
        for(int j = i; j < nums.size(); ++j)
        {
            nums[j] = 0;
        }
    }
};