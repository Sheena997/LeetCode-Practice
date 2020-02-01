/*
给定一个整数数组和一个整数 k, 你需要在数组里找到不同的 k-diff 数对。这里将 k-diff 数对定义为一个整数对 (i, j), 其中 i 和 j 都是数组中的数字，且两数之差的绝对值是 k.
示例 1:
输入: [3, 1, 4, 1, 5], k = 2
输出: 2
解释: 数组中有两个 2-diff 数对, (1, 3) 和 (3, 5)。
尽管数组中有两个1，但我们只应返回不同的数对的数量。
示例 2:
输入:[1, 2, 3, 4, 5], k = 1
输出: 4
解释: 数组中有四个 1-diff 数对, (1, 2), (2, 3), (3, 4) 和 (4, 5)。
示例 3:
输入: [1, 3, 1, 5, 4], k = 0
输出: 1
解释: 数组中只有一个 0-diff 数对，(1, 1)。
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/k-diff-pairs-in-an-array
*/
class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        if(nums.empty())
            return 0;
        int count = 0;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size() - 1; ++i)
        {
            if((i != 0 && nums[i] != nums[i - 1]) || (i == 0))
            {
                for(int j = i + 1; j < nums.size(); ++j)
                {
                    if(nums[j] - nums[i] > k)
                        break;
                    else if(nums[j] - nums[i] == k)
                    {
                        ++count;
                        break;
                    }
                }
            }
        }
        
        return count;
   }
};

// 哈希表更简单
class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        if(nums.empty() || k < 0)
            return 0;
        map<int, int> hash;
        int count = 0;
        for(auto e : nums)
            ++hash[e];
        if(k == 0)
        {
            for(auto it = hash.begin(); it != hash.end(); ++it)
                if(it->second > 1)
                    ++count;
        }
        else
        {
            for(auto it = hash.begin(); it != hash.end(); ++it)
            {
                int val = it->first + k;
                if(hash.find(val) != hash.end())
                    ++count;
            }
        }
        
        return count;
    }
};

      