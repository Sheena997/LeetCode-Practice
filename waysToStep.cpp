/*
三步问题。有个小孩正在上楼梯，楼梯有n阶台阶，小孩一次可以上1阶、2阶或3阶。
实现一种方法，计算小孩有多少种上楼梯的方式。结果可能很大，你需要对结果模1000000007。
示例1:
 输入：n = 3 
 输出：4
 说明: 有四种走法
示例2:
 输入：n = 5
 输出：13
提示:
n范围在[1, 1000000]之间
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/three-steps-problem-lcci
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/
class Solution {
public:
    int waysToStep(int n) {
        if(n == 1)
            return 1;
        if(n == 2)
            return 2;
        if(n == 3)
            return 4;
        long long f1 = 1, f2 = 2, f3 = 4;
        for(int i = 4; i <= n; ++i)
        {
            long long f = (f1 + f2 + f3) % 1000000007;
            f1 = f2;
            f2 = f3;
            f3 = f;
        }
        
        return f3;
    }
};