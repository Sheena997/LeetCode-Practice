/*Bigram �ִʣ���stringת��vector<string>Ϊ�˱Ƚ������ַ����Ƿ���ͬ��
������һ����?first �͵ڶ�����?second��������ĳЩ�ı�?text?�п����� "first second third" ��ʽ���ֵ����������?second?����?first?���֣�third?����?second?���֡�

����ÿ����������������������� "third" ��ӵ����У������ش𰸡�


ʾ�� 1��

���룺text = "alice is a good girl she is a good student", first = "a", second = "good"
�����["girl","student"]

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/occurrences-after-bigram

*/
class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string> ret;
        vector<string> v;
        string s;
        /*��stringת��vector<string>*/
        for(auto it = text.begin(); it != text.end(); ++it)
        {
            char c = *it;
            if(*it != ' ')
                s += c;
            else
            {
                v.push_back(s);
                s = "";
            }
            if(it == text.end() - 1)
                v.push_back(s);
        }
        for(int i = 0; i < v.size() - 2; ++i)
        {
            if(v[i] == first && v[i + 1] == second)
                ret.push_back(v[i + 2]);
        }
        return ret;
    }
};
