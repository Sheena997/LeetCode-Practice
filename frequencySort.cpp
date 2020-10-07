/*
451. �����ַ�����Ƶ������
����һ���ַ������뽫�ַ�������ַ����ճ��ֵ�Ƶ�ʽ������С�

ʾ�� 1:
����:
"tree"
���:
"eert"
����:
'e'�������Σ�'r'��'t'��ֻ����һ�Ρ�
���'e'���������'r'��'t'֮ǰ�����⣬"eetr"Ҳ��һ����Ч�Ĵ𰸡�

ʾ�� 2:
����:
"cccaaa"
���:
"cccaaa"
����:
'c'��'a'���������Ρ����⣬"aaaccc"Ҳ����Ч�Ĵ𰸡�
ע��"cacaca"�ǲ���ȷ�ģ���Ϊ��ͬ����ĸ�������һ��

ʾ�� 3:
����:
"Aabb"
���:
"bbAa"
����:
���⣬"bbaA"Ҳ��һ����Ч�Ĵ𰸣���"Aabb"�ǲ���ȷ�ġ�
ע��'A'��'a'����Ϊ�����ֲ�ͬ���ַ���

��Դ��LeetCode
���ӣ�https://leetcode-cn.com/problems/sort-characters-by-frequency/
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