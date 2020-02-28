/*
605. 种花问题
假设你有一个很长的花坛，一部分地块种植了花，另一部分却没有。可是，花卉不能种植在相邻的地块上，它们会争夺水源，两者都会死去。
给定一个花坛（表示为一个数组包含0和1，其中0表示没种植花，1表示种植了花），和一个数 n 。能否在不打破种植规则的情况下种入 n 朵花？能则返回True，不能则返回False。
示例 1:
输入: flowerbed = [1,0,0,0,1], n = 1
输出: True
示例 2:
输入: flowerbed = [1,0,0,0,1], n = 2
输出: False
来源：LeetCode
链接：https://leetcode-cn.com/problems/can-place-flowers/
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