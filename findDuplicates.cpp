/*
442. �������ظ�������
����һ���������� a������1 �� a[i] �� n ��nΪ���鳤�ȣ�, ������ЩԪ�س������ζ�����Ԫ�س���һ�Ρ�
�ҵ����г������ε�Ԫ�ء�
����Բ��õ��κζ���ռ䲢��O(n)ʱ�临�Ӷ��ڽ�����������
ʾ����
����:
[4,3,2,7,8,2,3,1]
���:
[2,3]

��Դ��LeetCode
���ӣ�https://leetcode-cn.com/problems/find-all-duplicates-in-an-array/
*/
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        /*
        vector<int> res;
        for(int i = 0; i < nums.size(); ++i)
        {
            while(nums[nums[i] - 1] != nums[i])
                swap(nums[nums[i] - 1], nums[i]);
        }
        
        for(int i = 0; i < nums.size(); ++i)
        {
            if(nums[i] != i + 1)
                res.push_back(nums[i]);
        }
        return res;
        */
        
        map<int, int> mp;
        for(auto e : nums)
            ++mp[e];
        vector<int> res;
        for(int i = 0; i < mp.size(); ++i)
        {
            if(mp[i] == 2)
                res.push_back(i);
        }
        
        return res;
    }
};