/*
给定两个有序整数数组 nums1 和 nums2，将 nums2 合并到 nums1 中，使得 num1 成为一个有序数组。
说明:
初始化 nums1 和 nums2 的元素数量分别为 m 和 n。
你可以假设 nums1 有足够的空间（空间大小大于或等于 m + n）来保存 nums2 中的元素。
示例:
输入:
nums1 = [1,2,3,0,0,0], m = 3
nums2 = [2,5,6],       n = 3
输出: [1,2,2,3,5,6]
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/merge-sorted-array
*/
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(auto e : nums2)
            nums1[m++] = e;
        sort(nums1.begin(), nums1.end());
    }
};

class Solution {
public:
    void merge(vector<int>& A, int m, vector<int>& B, int n) {
        int index = m + n - 1, l = m - 1, r = n - 1;
        while(l >= 0 && r >= 0)
        {
            if(A[l] > B[r])
                A[index--] = A[l--];
            else
                A[index--] = B[r--];
        }
        
        while(l >= 0)
        {
            A[index--] = A[l--];
        }
        while(r >= 0)
        {
            A[index--] = B[r--];
        }
    }
};