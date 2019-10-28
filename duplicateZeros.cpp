/*
给你一个长度固定的整数数组?arr，请你将该数组中出现的每个零都复写一遍，并将其余的元素向右平移。

注意：请不要在超过该数组长度的位置写入元素。

要求：请对输入的数组?就地?进行上述修改，不要从函数返回任何东西。

?

示例 1：

输入：[1,0,2,3,0,4,5,0]
输出：null
解释：调用函数后，输入的数组将被修改为：[1,0,0,2,3,0,0,4]

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/duplicate-zeros
*/
class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        for(int i = 0; i < arr.size(); ++i)
        {
            if(arr[i] == 0)
            {
                for(int j = arr.size() - 1; j > i + 1; --j)
                {
                    arr[j] = arr[j - 1];
                }
                if(i + 1 < arr.size())//若是最后一个元素，直接去掉，不然i+1会溢出
                arr[i + 1] = 0;
                ++i;
            }
        }
    }
};