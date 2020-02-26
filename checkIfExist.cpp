/*
����һ����������?arr���������Ƿ������������?N �� M������?N?��?M?������������N = 2 * M����

����ʽ�أ�����Ƿ���������±�?i �� j ���㣺

i != j
0 <= i, j < arr.length
arr[i] == 2 * arr[j]
ʾ�� 1��
���룺arr = [10,2,5,3]
�����true
���ͣ�N = 10 �� M = 5 ���������� 10 = 2 * 5 ��
ʾ�� 2��
���룺arr = [7,1,14,11]
�����true
���ͣ�N = 14 �� M = 7 ���������� 14 = 2 * 7 ��
ʾ�� 3��
���룺arr = [3,1,7,11]
�����false
���ͣ��ڸ�����²����� N �� M ���� N = 2 * M ��
��ʾ��
2 <= arr.length <= 500
-10^3 <= arr[i] <= 10^3
��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/check-if-n-and-its-double-exist
*/
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int l = arr.size();
        for (int i = 0; i < l; i++)
            for (int j = i + 1; j < l; j++)
                if (arr[i] == 2 * arr[j] || arr[j] == 2 * arr[i])
                    return true;
        return false;
    }
};