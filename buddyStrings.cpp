/*
给定两个由小写字母构成的字符串 A 和 B ，只要我们可以通过交换 A 中的两个字母得到与 B 相等的结果，就返回 true ；否则返回 false 。
示例 1：
输入： A = "ab", B = "ba"
输出： true
示例 2：
输入： A = "ab", B = "ab"
输出： false
示例 3:
输入： A = "aa", B = "aa"
输出： true
示例 4：
输入： A = "aaaaaaabc", B = "aaaaaaacb"
输出： true
示例 5：
输入： A = "", B = "aa"
输出： false
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/buddy-strings
*/
class Solution {
public:
    bool buddyStrings(string A, string B) {
        if(A.size() != B.size() || A.size() < 2 || B.size() < 2)
            return false;
        vector<int> count(26, 0);
        vector<char> va;
        vector<char> vb;
        int sum = 0;
        for(int i = 0; i < A.size(); ++i)
        {
            ++count[A[i] - 'a'];
            if(A[i] != B[i])
            {
                va.push_back(A[i]);
                vb.push_back(B[i]);
                ++sum;
            }
        }
        if(sum > 2 || sum == 1)
            return false;
        else if(sum == 2)
            return (va[0] == vb[1] && va[1] == vb[0]);
        else
        {
            for(auto e : count)
            {
                if(e >= 2)
                    return true;
            }
            return false;
        }
        
        return true;
    }
};
