/*
假设Andy和Doris想在晚餐时选择一家餐厅，并且他们都有一个表示最喜爱餐厅的列表，每个餐厅的名字用字符串表示。
你需要帮助他们用最少的索引和找出他们共同喜爱的餐厅。 如果答案不止一个，则输出所有答案并且不考虑顺序。 你可以假设总是存在一个答案。
示例 1:
输入:
["Shogun", "Tapioca Express", "Burger King", "KFC"]
["Piatti", "The Grill at Torrey Pines", "Hungry Hunter Steakhouse", "Shogun"]
输出: ["Shogun"]
解释: 他们唯一共同喜爱的餐厅是“Shogun”。
示例 2:
输入:
["Shogun", "Tapioca Express", "Burger King", "KFC"]
["KFC", "Shogun", "Burger King"]
输出: ["Shogun"]
解释: 他们共同喜爱且具有最小索引和的餐厅是“Shogun”，它有最小的索引和1(0+1)。
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/minimum-index-sum-of-two-lists
unordered_map
*/
class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<string> res;
        unordered_map<string, int> unmap;
        int minIndex = list1.size() + list2.size() - 2;
        for(int i = 0; i < list1.size(); ++i)
            unmap.insert(make_pair(list1[i], i));
        for(int i = 0; i < list2.size(); ++i)
        {
            if(unmap.count(list2[i]))
            {
                if(unmap[list2[i]] + i == minIndex)
                {
                    res.push_back(list2[i]);
                }
                else if(unmap[list2[i]] + i < minIndex)
                {
                    res.clear();
                    res.push_back(list2[i]);
                    minIndex = unmap[list2[i]] + i;
                }
            }
        }
        
        return res;
    }
};


