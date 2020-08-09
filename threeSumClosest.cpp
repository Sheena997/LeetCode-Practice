/*
16. ��ӽ�������֮��
����һ������ n ������������ nums �� һ��Ŀ��ֵ target���ҳ� nums �е�����������
ʹ�����ǵĺ��� target ��ӽ����������������ĺ͡��ٶ�ÿ������ֻ����Ψһ�𰸡� 

ʾ����

���룺nums = [-1,2,1,-4], target = 1
�����2
���ͣ��� target ��ӽ��ĺ��� 2 (-1 + 2 + 1 = 2) ��

��Դ��LeetCode
���ӣ�https://leetcode-cn.com/problems/3sum-closest/
*/
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int res = nums[0] + nums[1] + nums[2];
        for(int i = 0; i < nums.size() - 2; ++i)
        {
            int left = i + 1, right = nums.size() - 1;
            while(left < right)
            {
                int ret = nums[left] + nums[i] + nums[right];
                if(abs(ret - target) < abs(res - target))
                    res = ret;
                
                if(ret < target)
                    ++left;
                else if(ret > target)
                    --right;
                else
                    return ret;
            }
        }
        
        return res;
    }
};