/*
������ 17.11. ���ʾ���
�и��ں����ʵĳ����ı��ļ������������������ʣ��ҳ�������ļ�������
�����ʵ���̾���(���������)�����Ѱ�ҹ���������ļ��л��ظ���Σ�
��ÿ��Ѱ�ҵĵ��ʲ�ͬ�����ܶԴ��Ż���?

ʾ����

���룺words = ["I","am","a","student","from","a","university","in","a","city"], 
word1 = "a", word2 = "student"
�����1
��ʾ��
words.length <= 100000

��Դ��LeetCode
���ӣ�https://leetcode-cn.com/problems/find-closest-lcci/
*/
class Solution {
public:
    int findClosest(vector<string>& words, string word1, string word2) {
        int pos1, pos2;
        int res = INT_MAX;
        for(int i = 0; i < words.size(); ++i)
        {
            if(word1 == words[i])
                pos1 = i;
            if(word2 == words[i])
                pos2 = i;
            
            res = min(res, abs(pos2 - pos1));
        }
        
        return res;
    }
};