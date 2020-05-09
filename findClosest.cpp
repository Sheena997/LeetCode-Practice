/*
面试题 17.11. 单词距离
有个内含单词的超大文本文件，给定任意两个单词，找出在这个文件中这两
个单词的最短距离(相隔单词数)。如果寻找过程在这个文件中会重复多次，
而每次寻找的单词不同，你能对此优化吗?

示例：

输入：words = ["I","am","a","student","from","a","university","in","a","city"], 
word1 = "a", word2 = "student"
输出：1
提示：
words.length <= 100000

来源：LeetCode
链接：https://leetcode-cn.com/problems/find-closest-lcci/
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