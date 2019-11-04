/*
公交站间的距离
环形公交路线上有n个站，按次序从0到n - 1进行编号。我们已知每一对相邻公交站之间的距离，distance[i]表示编号为i的车站和编号为(i + 1) % n的车站之间的距离。

环线上的公交车都可以按顺时针和逆时针的方向行驶。

返回乘客从出发点start到目的地destination之间的最短距离。
示例 1：

输入：distance = [1,2,3,4], start = 0, destination = 1
输出：1
解释：公交站 0 和 1 之间的距离是 1 或 9，最小值是 1。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/distance-between-bus-stops
*/
class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        if(start > destination)
            swap(start, destination);
        int sum = 0;
        int s1 = 0;
        int s2 = 0;
        for(int i = 0; i < distance.size(); ++i)
        {
            sum += distance[i];
        }
        
        for(int i = start; i < destination; ++i)
        {
            s1 += distance[i];
        }
        s2 = sum - s1;
        return (s1 < s2 ? s1 : s2);
    }
};
