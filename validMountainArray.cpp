/*
给定一个整数数组 A，如果它是有效的山脉数组就返回 true，否则返回 false。
让我们回顾一下，如果 A 满足下述条件，那么它是一个山脉数组：
A.length >= 3
在 0 < i < A.length - 1 条件下，存在 i 使得：
A[0] < A[1] < ... A[i-1] < A[i]
A[i] > A[i+1] > ... > A[B.length - 1]
示例 1：
输入：[2,1]
输出：false
示例 2：
输入：[3,5,5]
输出：false
示例 3：
输入：[0,3,2,1]
输出：true
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/valid-mountain-array
*/
class Solution {
public:
    bool validMountainArray(vector<int>& A) {
        if(A.size() < 3)
            return false;
        
        int head = 0, tail = A.size() - 1;
        while(head < tail && A[head] < A[head + 1])
            ++head;
        while(tail > head && A[tail] < A[tail - 1])
            --tail;
        
        if(head != tail || head == 0 || tail == A.size() - 1)
            return false;
        else
            return true;
    }
};


