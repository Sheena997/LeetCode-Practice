/*
������ 01.08. �����
��дһ���㷨����M �� N������ĳ��Ԫ��Ϊ0���������ڵ����������㡣
ʾ�� 1��
���룺
[
  [1,1,1],
  [1,0,1],
  [1,1,1]
]
�����
[
  [1,0,1],
  [0,0,0],
  [1,0,1]
]
ʾ�� 2��
���룺
[
  [0,1,2,0],
  [3,4,5,2],
  [1,3,1,5]
]
�����
[
  [0,0,0,0],
  [0,4,5,0],
  [0,3,1,0]
]

��Դ��LeetCode
���ӣ�https://leetcode-cn.com/problems/zero-matrix-lcci/
*/
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>> vv(matrix);
        for(int i = 0; i < matrix.size(); ++i)
        {
            for(int j = 0; j < matrix[0].size(); ++j)
            {
                if(vv[i][j] == 0)
                {
                    int x1 = i; 
                    int x2 = i;
                    int y1 = j;
                    int y2 = j;
                    while(x1 - 1 >= 0)
                        matrix[--x1][j] = 0;
                    while(x2 + 1 < matrix.size())
                        matrix[++x2][j] = 0;
                    while(y1 - 1 >= 0)
                        matrix[i][--y1] = 0;
                    while(y2 + 1 < matrix[0].size())
                        matrix[i][++y2] = 0;
                }
            }
        }
    }
};