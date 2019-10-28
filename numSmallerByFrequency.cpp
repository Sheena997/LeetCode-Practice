/*
����������һ������f(s)�����д������s��һ���ǿ��ַ������ú����Ĺ�����ͳ��s�У����ֵ���Ƚϣ���С��ĸ�ĳ���Ƶ�Ρ�

���磬��s = "dcce"����ôf(s) = 2����Ϊ��С����ĸ��"c"����������2 �Ρ�

���ڣ����������ַ�����������queries�ʹʻ��words�����㷵��һ����������answer��Ϊ�𰸣�����ÿ��answer[i]������f(queries[i])< f(W)�Ĵʵ���Ŀ��W�Ǵʻ��words�еĴʡ�

ʾ�� 1��

���룺queries = ["cbd"], words = ["zaaaz"]
�����[1]
���ͣ���ѯ f("cbd") = 1���� f("zaaaz") = 3 ���� f("cbd") < f("zaaaz")��

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/compare-strings-by-frequency-of-the-smallest-character

*/
//�Ƚ�ÿ���ַ�������С��ĸ���ֵĴ����洢������Ȼ���ڱȽ�
class Solution {
public:
    int f(string& s)
    {
        int sum = 1;
        char tmp = s[0];
        for(int i = 1; i < s.size(); ++i)
        {
            if(tmp == s[i])
            {
                ++sum;
            }
            else if(tmp > s[i])
            {
                sum = 1;
                tmp = s[i];
            }
        }
        return sum;
    }
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        vector<int> res(queries.size());
        vector<int> ret(words.size());
        for(int i = 0; i < queries.size(); ++i)
        {
            res[i] = f(queries[i]);
        }
        for(int i = 0; i < words.size(); ++i)
        {
            ret[i] = f(words[i]);
        }
        vector<int> sum(queries.size());
        for(int i = 0; i < queries.size(); ++i)
        {
            for(int j = 0; j < words.size(); ++j)
            {
                if(res[i] < ret[j])
                    ++sum[i];
            }
        }
        return sum;
    }

};

