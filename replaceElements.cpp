/*
给你一个数组 arr ，请你将每个元素用它右边最大的元素替换，如果是最后一个元素，用 -1 替换。
完成所有替换操作后，请你返回这个数组。
示例
输入：arr = [17,18,5,4,6,1]
输出：[18,6,6,6,1,-1
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/replace-elements-with-greatest-element-on-right-side
*/
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        if(arr.empty())
            return arr;
        
        int pre = arr[arr.size() -1];
        arr[arr.size() - 1] = -1;
        
        for(int i = arr.size() - 2; i >= 0; --i)
        {
            int tmp = arr[i];
            arr[i] = max(pre, arr[i + 1]);
            pre = tmp;
        }
        
        return arr;
    }
};