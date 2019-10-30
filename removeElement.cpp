/*
�Ƴ�Ԫ��
����һ������ nums��һ��ֵ val������Ҫԭ���Ƴ�������ֵ����val��Ԫ�أ������Ƴ���������³��ȡ�

��Ҫʹ�ö��������ռ䣬�������ԭ���޸��������鲢��ʹ�� O(1) ����ռ����������ɡ�

Ԫ�ص�˳����Ըı䡣�㲻��Ҫ���������г����³��Ⱥ����Ԫ�ء�

ʾ�� 1:

���� nums = [3,2,2,3], val = 3,

����Ӧ�÷����µĳ��� 2, ���� nums �е�ǰ����Ԫ�ؾ�Ϊ 2��

�㲻��Ҫ���������г����³��Ⱥ����Ԫ�ء�

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/remove-element
*/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
      /*����һ��
        int sum = 0;
        for(int i = 0; i < nums.size(); ++i)
        { 
            if(nums[i] == val)
            {
                nums.erase(nums.begin() + i);
                --i;
            }
            else
                ++sum;
        }
        return sum;
        */
        int index = 0;
        for(int i = 0; i < nums.size(); ++i)
        {
            if(nums[i] != val)
                nums[index++] = nums[i];
        }
        return index;
    }
};

