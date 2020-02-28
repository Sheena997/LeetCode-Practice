/*
605. �ֻ�����
��������һ���ܳ��Ļ�̳��һ���ֵؿ���ֲ�˻�����һ����ȴû�С����ǣ����ܲ�����ֲ�����ڵĵؿ��ϣ����ǻ�����ˮԴ�����߶�����ȥ��
����һ����̳����ʾΪһ���������0��1������0��ʾû��ֲ����1��ʾ��ֲ�˻�������һ���� n ���ܷ��ڲ�������ֲ�������������� n �仨�����򷵻�True�������򷵻�False��
ʾ�� 1:
����: flowerbed = [1,0,0,0,1], n = 1
���: True
ʾ�� 2:
����: flowerbed = [1,0,0,0,1], n = 2
���: False
��Դ��LeetCode
���ӣ�https://leetcode-cn.com/problems/can-place-flowers/
*/
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int sum = 1, val = 0;
        for(auto e : flowerbed)
        {
            if(e != 0)
            {
                val += (sum - 1) / 2;
                sum = 0;
            }
            else
            {
                ++sum;
            }
        }
        
        val += sum / 2;
        
        return val >= n;
    }
};