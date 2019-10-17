/*数轴上放置了一些筹码，每个筹码的位置存在数组?chips?当中。

你可以对 任何筹码 执行下面两种操作之一（不限操作次数，0 次也可以）：

将第 i 个筹码向左或者右移动 2 个单位，代价为 0。
将第 i 个筹码向左或者右移动 1 个单位，代价为 1。
最开始的时候，同一位置上也可能放着两个或者更多的筹码。

返回将所有筹码移动到同一位置（任意位置）上所需要的最小代价。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/play-with-chips
*/

/*在数轴上放一些砝码，移动到任意位置的最小代价的方案，
偶数移动到偶数位置没有代价，奇数移动到奇数位置没有代价，
奇数移动到偶数位置代价为1，偶数移动到奇数位置代价为1，
这样可以求出偶数和奇数的个数，以较小者为最小代价的方案。
*/
class Solution {
public:
    int minCostToMoveChips(vector<int>& chips) {
        int even = 0;
        int odd = 0;
        for(int i = 0; i < chips.size(); ++i)
        {
            if(chips[i] % 2 == 0)
                ++even;
            else
                ++odd;
        }
        return min(even,odd);
    }
};