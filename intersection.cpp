/*
两个数组的交集
给定两个数组，编写一个函数来计算它们的交集。
示例 1:
输入: nums1 = [1,2,2,1], nums2 = [2,2]
输出: [2]
示例 2:
输入: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
输出: [9,4]
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/intersection-of-two-arrays
*/
//set去重  vector中的assign是用括号里面的容器里的东西替代vector里的东西
//vector中的assign替换其当前内容，并相应地修改其大小
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        set<int> s;
        for(int i = 0; i < nums1.size(); ++i)
        {
            if(find(nums2.begin(), nums2.end(), nums1[i]) != nums2.end())
                s.insert(nums1[i]);
        }
        /*for(auto e : s)
            res.push_back(e);
         */
        res.assign(s.begin(), s.end());
        return res;
    }
};
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> us1;
        for(auto e : nums1)
            us1.insert(e);
        
        unordered_set<int> us2;
        for(auto e : nums2)
            us2.insert(e);
        
        vector<int> res;
        for(auto e : us1)
        {
            if(us2.find(e) != us2.end())
                res.push_back(e);
        }
        
        return res;
    }
};
