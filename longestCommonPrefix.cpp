/*
14. �����ǰ׺
��дһ�������������ַ��������е������ǰ׺��
��������ڹ���ǰ׺�����ؿ��ַ��� ""��
ʾ�� 1:
����: ["flower","flow","flight"]
���: "fl"
ʾ�� 2:
����: ["dog","racecar","car"]
���: ""
����: ���벻���ڹ���ǰ׺��
˵��:
��������ֻ����Сд��ĸ a-z ��

��Դ��LeetCode
���ӣ�https://leetcode-cn.com/problems/longest-common-prefix/
*/
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty())
            return "";
        if(strs.size() == 1)
            return strs[0];
        
        string s = strs[0];
        for(int i = 1; i <= strs[0].size(); ++i)
        {
            s = strs[0].substr(0, i);
            for(int j = 1; j < strs.size(); ++j)
            {
                if(i > strs[j].size() || strs[j].substr(0, i) != s)
                    return strs[0].substr(0, i - 1);
            }
        }
        
        return strs[0];
    }
};