/*
����
����������һ���������У��������е�������˳����б������õ���һ��������ǰ�������£�
1.     1
2.     11
3.     21
4.     1211
5.     111221
1?������??"one 1"("һ��һ") , ��?11��
11 ������?"two 1s"("����һ"��, ��?21��
21 ������?"one 2", ?"one 1"?��"һ����"?,??"һ��һ")?, ��?1211��
����һ�������� n��1 ��?n?�� 30��������������еĵ� n ��.
ע�⣺����˳�򽫱�ʾΪһ���ַ�����
ʾ�� 1:
����: 1
���: "1"
��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/count-and-say
*/
//��һ��Ϊ1���ڶ����һ������һ��1��Ϊ11��������ڶ�����������1��Ϊ21
class Solution {
public:
    string countAndSay(int n) {
        if(n == 1)
            return "1";
        string s = countAndSay(n - 1);
        int count = 1;
        string res;
        for(int i = 0; i < s.size(); ++i)
        {
            if(s[i] == s[i + 1])
            {
                ++count;
            }
            else 
            {
                res += (to_string(count) + s[i]);
                count = 1;
            }
        }
        return res;
    }
};
