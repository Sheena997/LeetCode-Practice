/*
��С�ƶ�����ʹ����Ԫ�����
����һ������Ϊ n �ķǿ��������飬�ҵ�����������Ԫ����ȵ���С�ƶ�������ÿ���ƶ�����ʹ n - 1 ��Ԫ������ 1��
ʾ��:
����:
[1,2,3]
���:
3
��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/minimum-moves-to-equal-array-elements
*/
/*
ÿ�β���n-1��Ԫ�ؼ�1��ֱ������Ԫ�ض���� == ÿ�β������ֵ-1��
ֱ������Ԫ�ص�����Сֵ == ������Ԫ������Сֵ��ֵ�ĺ�
*/
class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int min = nums[0];
        int sum = 0;
        for(int i =1 ; i < nums.size(); ++i)
        {
            sum += (nums[i] - min);
        }
        return sum;
    }
};
