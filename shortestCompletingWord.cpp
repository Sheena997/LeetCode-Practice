/*
��������б�words���е�һ�����ʰ������գ�licensePlate�������е���ĸ����ô���ǳ�֮Ϊ�����ʡ��������������У���̵ĵ������ǳ�֮Ϊ��������ʡ�

������ƥ�������е���ĸʱ�����ִ�Сд�����������е�?"P"?��Ȼ����ƥ�䵥���е�?"p"?��ĸ��

���Ǳ�֤һ������һ����������ʡ����ж�����ʶ�������������ʵ�ƥ������ʱȡ�����б����ǰ��һ����

�����п��ܰ��������ͬ���ַ�������˵���������� "PP"������?"pair"?�޷�ƥ�䣬����?"supper"?����ƥ�䡣

?

ʾ�� 1��

���룺licensePlate = "1s3 PSt", words = ["step", "steps", "stripe", "stepple"]
�����"steps"
˵�������������Ӧ�ð��� "s"��"p"��"s" �Լ� "t"������ "step" ��ֻ����һ�� "s" ������������������ͬʱ��ƥ����������Ǻ��������еĴ�Сд��

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/shortest-completing-word
*/

class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        vector<int> v(26, 0);
        string res = "";
        res.resize(10);
        for(auto e:licensePlate)
        {
            if((e >= 'a' && e <= 'z') || (e >= 'A' && e <= 'Z'))
            {
                e |= 32;
                ++v[e - 'a'];
            }
        }
        for(int i = 0; i < words.size(); ++i)
        {
            vector<int> a(26, 0);
            int flag = 0;
            for(int j = 0; j < words[i].size(); ++j)
            {
                ++a[words[i][j] - 'a'];
            }
            for(int k = 0; k < 26; ++k)
            {
                if(v[k] != 0 && a[k] < v[k])
                {
                    flag = 1;
                    break;
                }
            }
            if(flag == 0)
                res = res.size() > words[i].size() ? words[i] : res;
        }
        return res;
    }
};