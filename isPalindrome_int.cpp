/*
�ж�һ�������Ƿ��ǻ���������������ָ���򣨴������ң��͵��򣨴������󣩶�����һ����������

ʾ�� 1:

����: 121
���: true
���ӣ�https://leetcode-cn.com/problems/palindrome-number/

*/
class Solution {
public:
    bool isPalindrome(int x) {
        vector<int> v;
        if(x < 0)
            return false;
        if(x >= 0 && x < 10)
            return true;
        while(x)
        {
            v.push_back(x%10);
            x /= 10;
        }
        int flag = 0;
        for(int i = 0; i < v.size() / 2; ++i)
        {
            if(v[i] == v[v.size() - i - 1])
                flag = 1;
            else 
                return false;
        }
        if(flag == 1)
            return true;
        else 
            return false;
    }
};

