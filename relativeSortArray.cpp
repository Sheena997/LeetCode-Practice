/*
给你两个数组，arr1 和 arr2，
arr2 中的元素各不相同
arr2 中的每个元素都出现在 arr1 中
对 arr1 中的元素进行排序，使 arr1 中项的相对顺序和 arr2 中的相对顺序相同。未在 arr2 中出现过的元素需要按照升序放在 arr1 的末尾。
示例：
输入：arr1 = [2,3,1,3,2,4,6,7,9,2,19], arr2 = [2,1,4,3,9,6]
输出：[2,2,2,1,4,3,3,9,6,7,19]
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/relative-sort-array
*/
class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> v;
        vector<int>::iterator it;
        for(int i = 0; i < arr2.size(); ++i)
        {
            for(it = arr1.begin(); it != arr1.end();)
            {
                if(*it == arr2[i])
                {
                    v.push_back(*it);
                    it = arr1.erase(it);
                }
                else
                {
                    ++it;
                }
            }
        }
        sort(arr1.begin(), arr1.end());
        for(auto e : arr1)
        {
            v.push_back(e);
        }
        
        return v;
    }
};
