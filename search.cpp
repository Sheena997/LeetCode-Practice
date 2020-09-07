/*
面试题 10.03. 搜索旋转数组
搜索旋转数组。给定一个排序后的数组，包含n个整数，但这个数组已被旋转过很多次了，
次数不详。请编写代码找出数组中的某个元素，假设数组元素原先是按升序排列的。若有
多个相同元素，返回索引值最小的一个。

示例1:

 输入: arr = [15, 16, 19, 20, 25, 1, 3, 4, 5, 7, 10, 14], target = 5
 输出: 8（元素5在该数组中的索引）
示例2:

 输入：arr = [15, 16, 19, 20, 25, 1, 3, 4, 5, 7, 10, 14], target = 11
 输出：-1 （没有找到）
提示:

arr 长度范围在[1, 1000000]之间

来源：LeetCode
链接：https://leetcode-cn.com/problems/search-rotate-array-lcci/
*/
class Solution {
public:
    int search(vector<int>& arr, int target) {
        if(arr.size() < 1)
            return -1;
        if(arr.size() == 1)
            return arr[0] == target;
        
        int left = 0, right = arr.size() - 1;
        while(left <= right)
        {
            int mid = left + (right - left) / 2;
            if(arr[left] < arr[mid])
            {
                if(arr[left] <= target && target <= arr[mid])
                    right = mid;
                else
                    left = mid + 1;
            }
            else if(arr[left] > arr[mid])
            {
                if(arr[left] > arr[right] && arr[mid] < target && target <= arr[right])
                    left = mid + 1;
                else
                    right = mid;
            }
            else
            {
                if(arr[left] != target)
                    ++left;
                else
                    return left;
            }
        }
        
        return -1;
    }
};