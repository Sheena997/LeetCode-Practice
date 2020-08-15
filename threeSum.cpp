/*
15. ����֮��
����һ������ n ������������ nums���ж� nums ���Ƿ��������Ԫ��
a��b��c ��ʹ�� a + b + c = 0 �������ҳ��������������Ҳ��ظ�����Ԫ�顣

ע�⣺���в����԰����ظ�����Ԫ�顣

ʾ����
�������� nums = [-1, 0, 1, 2, -1, -4]��
����Ҫ�����Ԫ�鼯��Ϊ��
[
  [-1, 0, 1],
  [-1, -1, 2]
]

��Դ��LeetCode
���ӣ�https://leetcode-cn.com/problems/3sum/
*/
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        int target;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); ++i)
        {
            target = nums[i];
            if(i > 0 && nums[i] == nums[i - 1])
                continue;
            int left = i + 1, right = nums.size() - 1;
            while(left < right)
            {
                if(nums[left] + nums[right] + target < 0)
                {
                    ++left;
                }
                else if(nums[left] + nums[right] + target > 0)
                {
                    --right;
                }
                else
                {
                    res.push_back({target, nums[left], nums[right]});
                    ++left;
                    --right;
                    while(left < right && nums[left] == nums[left - 1])
                        ++left;
                    while(left < right && nums[right] == nums[right + 1])
                        --right;
                }
            }
        }
        
        return res;
    }
};