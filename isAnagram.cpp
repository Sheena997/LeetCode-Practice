/*
���򼴿ɡ�
���������ַ��� s �� t ����дһ���������ж� t �Ƿ��� s ����ĸ��λ�ʡ�
ʾ��1:

����: s = "anagram", t = "nagaram"
���: true
ʾ�� 2:

����: s = "rat", t = "car"
���: false

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/valid-anagram
*/
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());//�������ַ�������
        sort(t.begin(), t.end());
        return s == t;
    }
};
