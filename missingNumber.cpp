/*
ȱʧ����
����һ������ 0, 1, 2, ..., n?��?n?���������У��ҳ� 0 .. n?��û�г����������е��Ǹ�����

ʾ�� 1:

����: [3,0,1]
���: 2

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/missing-number
*/
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ret = 0;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); ++i)
        {
            if(i != nums[i])
            {
                ret = i;
                break;
            }
            else
                ret = i + 1;
        }
        return ret;
    }
};