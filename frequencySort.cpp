/*
451. 根据字符出现频率排序
给定一个字符串，请将字符串里的字符按照出现的频率降序排列。

示例 1:
输入:
"tree"
输出:
"eert"
解释:
'e'出现两次，'r'和't'都只出现一次。
因此'e'必须出现在'r'和't'之前。此外，"eetr"也是一个有效的答案。

示例 2:
输入:
"cccaaa"
输出:
"cccaaa"
解释:
'c'和'a'都出现三次。此外，"aaaccc"也是有效的答案。
注意"cacaca"是不正确的，因为相同的字母必须放在一起。

示例 3:
输入:
"Aabb"
输出:
"bbAa"
解释:
此外，"bbaA"也是一个有效的答案，但"Aabb"是不正确的。
注意'A'和'a'被认为是两种不同的字符。

来源：LeetCode
链接：https://leetcode-cn.com/problems/sort-characters-by-frequency/
*/
class Solution {
public:
    string frequencySort(string s) {
	    unordered_map<char, int> unmp;
	    string res;
	    vector<int> count;
	    unordered_set<char> st;

    	for (auto& e : s)
	    {
		    ++unmp[e];
		    st.insert(e);
	    }

	    auto p = st.begin();
	    while (p != st.end())
	    {
		    count.push_back(unmp[*p]);
		    ++p;
	    }
		
        sort(count.begin(), count.end());
	    reverse(count.begin(), count.end());
	    for (int i = 0; i < count.size(); ++i)
	    {
		    int ret = count[i];
		    for (auto e : s)
		    {
			    if (unmp[e] == count[i])
			    {
				    while (ret > 0)
                    {
                        res += e;
                        --ret;
                    }
				    unmp[e] = 0;
                    if(ret <= 0)
                        break;
			    }
		    }
	    }

	    return res;
    }

};

class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> unmp;
        multimap<int, char> mmp;
        string res;
        
        for(auto& e : s)
            ++unmp[e];
        for(auto it = unmp.begin(); it != unmp.end(); ++it)
            mmp.insert(make_pair(it->second, it->first));
        
        for(auto it = mmp.rbegin(); it != mmp.rend(); ++it)
        {
            int ret = it->first;
            while(ret--)
                res += (it->second);
        }
        
        return res;
    }
};