/*
1324. ��ֱ��ӡ����
����һ���ַ��� s�����㰴�յ����� s �еĳ���˳������ȫ����ֱ���ء�
����Ӧ�����ַ����б����ʽ���أ���Ҫʱ�ÿո�λ�������β���Ŀո���Ҫɾ����������β��ո񣩡�
ÿ������ֻ�ܷ���һ���ϣ�ÿһ����Ҳֻ����һ�����ʡ�

 

ʾ�� 1��

���룺s = "HOW ARE YOU"
�����["HAY","ORO","WEU"]
���ͣ�ÿ�����ʶ�Ӧ����ֱ��ӡ�� 
 "HAY"
 "ORO"
 "WEU"
ʾ�� 2��

���룺s = "TO BE OR NOT TO BE"
�����["TBONTB","OEROOE","   T"]
���ͣ���Ŀ����ʹ�ÿո�λ�������������ĩβ���ֿո�
"TBONTB"
"OEROOE"
"   T"
ʾ�� 3��

���룺s = "CONTEST IS COMING"
�����["CIC","OSO","N M","T I","E N","S G","T"]
 

��ʾ��

1 <= s.length <= 200
s ������дӢ����ĸ��
��Ŀ���ݱ�֤��������֮��ֻ��һ���ո�

��Դ��LeetCode
���ӣ�https://leetcode-cn.com/problems/print-words-vertically/
*/
class Solution {
public:
    vector<string> printVertically(string s) {
        int j = 0, t = 0, max_count = 0;
        vector<string> tmp(s.size());
        for(int i = 0; i < s.size(); ++i)
        {
            if(s[i] == ' ')
            {
                ++t;
                max_count = max(max_count, j);
                j = 0;
            }
            else
            {
                while(tmp[j].size() < t)
                    tmp[j].push_back(' ');
                tmp[j].push_back(s[i]);
                ++j;
            }
        }
        
        max_count = max(max_count, j);
        vector<string> res(tmp.begin(), tmp.begin() + max_count);
        
        return res;
    }
};