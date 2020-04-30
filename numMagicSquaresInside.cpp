/*
840. �����еĻ÷�
3 x 3 �Ļ÷���һ������д� 1 �� 9 �Ĳ�ͬ���ֵ� 3 x 3 ����
����ÿ�У�ÿ���Լ������Խ����ϵĸ���֮�Ͷ���ȡ�
����һ����������ɵ� grid�������ж��ٸ� 3 �� 3 �� ���÷��� �Ӿ��󣿣�ÿ���Ӿ����������ģ���
ʾ����
����: [[4,3,8,4],
      [9,5,1,9],
      [2,7,6,2]]
���: 1
����: 
������Ӿ�����һ�� 3 x 3 �Ļ÷���
438
951
276
����һ�����ǣ�
384
519
762
�ܵ���˵���ڱ�ʾ���������ľ�����ֻ��һ�� 3 x 3 �Ļ÷��Ӿ���
��ʾ:
1 <= grid.length <= 10
1 <= grid[0].length <= 10
0 <= grid[i][j] <= 15

��Դ:LeetCode
���ӣ�https://leetcode-cn.com/problems/magic-squares-in-grid/
*/
class Solution {
public:
    bool magicSquaresInside(int a, int b, int c, int x, int y, int z, int m, int n, int l)
    {
        if(a > 0 && a < 10 && b > 0 && b < 10 && c > 0 && c < 10
        && x > 0 && x < 10 && y > 0 && y < 10 && z > 0 && z < 10
        && m > 0 && m < 10 && n > 0 && n < 10 && l > 0 && l < 10
        && a != b && b != c && c != x && x != y && y != z && z != m && m != n && n != l
        && a + b + c == 15 && x + y + z == 15 && m + n + l == 15
        && a + x + m == 15 && b + y + n == 15 && c + z + l == 15
        && a + y + l == 15 && c + y + m == 15)
            return true;
        return false;
    }
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int res = 0;
        if(grid.size() < 3 || grid[0].size() < 3)
            return 0;
        for(int i = 1; i < grid.size() - 1; ++i)
        {
            for(int j = 1; j < grid[0].size() - 1; ++j)
            {
                if(grid[i][j] != 5)
                    continue;
                if(magicSquaresInside(grid[i - 1][j - 1], grid[i - 1][j], grid[i - 1][j + 1],
                                      grid[i][j - 1], grid[i][j], grid[i][j + 1],
                                      grid[i + 1][j - 1], grid[i + 1][j], grid[i + 1][j + 1]))
                    ++res;
                    
            }
        }
        
        return res;
    }
};
