/*
240. ������ά���� II
��дһ����Ч���㷨������ m x n ���� matrix �е�һ��Ŀ��ֵ target���þ�������������ԣ�
ÿ�е�Ԫ�ش������������С�
ÿ�е�Ԫ�ش��ϵ����������С�
ʾ��:
���о��� matrix ���£�

[
  [1,   4,  7, 11, 15],
  [2,   5,  8, 12, 19],
  [3,   6,  9, 16, 22],
  [10, 13, 14, 17, 24],
  [18, 21, 23, 26, 30]
]
���� target = 5������ true��
���� target = 20������ false��
��Դ��LeetCode
���ӣ�https://leetcode-cn.com/problems/search-a-2d-matrix-ii/
*/
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.empty() || matrix[0].empty())
            return false;
        
        int row = 0, col = matrix[0].size() - 1;
        while(row < matrix.size() && col >= 0)
        {
            if(target == matrix[row][col])
                return true;
            else if(target > matrix[row][col])
                ++row;
            else
                --col;
        }
        
        return false;
    }
};