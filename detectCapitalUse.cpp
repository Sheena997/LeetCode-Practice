/*
����д��ĸ
����һ�����ʣ�����Ҫ�жϵ��ʵĴ�дʹ���Ƿ���ȷ��
���Ƕ��壬���������ʱ�����ʵĴ�д�÷�����ȷ�ģ�
ȫ����ĸ���Ǵ�д������"USA"��
������������ĸ�����Ǵ�д������"leetcode"��
������ʲ�ֻ����һ����ĸ��ֻ������ĸ��д��?����?"Google"��
�������Ƕ����������û����ȷʹ�ô�д��ĸ��
ʾ�� 1:
����: "USA"
���: True
ʾ�� 2:
����: "FlaG"
���: False
��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/detect-capital
*/
//��Сд��ĸ�������Լ���д��ĸ���ֵ�λ��
class Solution {
public:
    bool detectCapitalUse(string word) {
        int sum = 0;
        int count = 0;
        for(int i = 0; i < word.size(); ++i)
        {
            if(word[i] >= 'A' && word[i] <= 'Z')
                sum = i;
            else
                ++count;
        }
        if(count == 0 || count == word.size() || sum == 0)
            return true;
        return false;
    }
};