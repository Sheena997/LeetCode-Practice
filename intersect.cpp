/*
给定两个数组，编写一个函数来计算它们的交集。
示例 1:
输入: nums1 = [1,2,2,1], nums2 = [2,2]
输出: [2,2]
示例 2:
输入: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
输出: [4,9]
说明：
输出结果中每个元素出现的次数，应与元素在两个数组中出现的次数一致。
我们可以不考虑输出结果的顺序。
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/intersection-of-two-arrays-ii
*/
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int i = 0, j = 0;
        while(i < nums1.size() && j < nums2.size())
        {
            if(nums1[i] == nums2[j])
            {
                res.push_back(nums1[i]);
                ++i;
                ++j;
            }
            else if(nums1[i] > nums2[j])
                ++j;
            else
                ++i;
        }
        
        return res;
    }
};
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> vc;
        map<int, int> mp;
        for(auto e : nums1)
            ++mp[e];
        
        for(auto e : nums2)
        {
            if(mp[e] > 0)
            {
                vc.push_back(e);
                --mp[e];
            }
        }
        
        return vc;
    }
};