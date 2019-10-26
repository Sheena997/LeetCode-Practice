
/*
����ͼ��� - ���鲻�ɱ�
����һ���������� nums��������������i��j(i��j) ��Χ��Ԫ�ص��ܺͣ�����i,j���㡣

ʾ����

���� nums = [-2, 0, 3, -5, 2, -1]����ͺ���Ϊ sumRange()

sumRange(0, 2) -> 1
sumRange(2, 5) -> -1
sumRange(0, 5) -> -3

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/range-sum-query-immutable

*/
class NumArray {
public:
    vector<int> nums1;
    NumArray(vector<int>& nums) {
        nums1 = nums;
    }
    
    int sumRange(int i, int j) {
        int sum = 0;
        for(int a = i; a < j + 1; ++a)
        {
            sum += nums1[a];
        }
        return sum;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */
 