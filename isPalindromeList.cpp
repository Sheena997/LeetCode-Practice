/*
234. 回文链表
请判断一个链表是否为回文链表。
示例 1:
输入: 1->2
输出: false
示例 2:
输入: 1->2->2->1
输出: true
进阶：
你能否用 O(n) 时间复杂度和 O(1) 空间复杂度解决此题？

来源：LeetCode
链接：https://leetcode-cn.com/problems/palindrome-linked-list/
*/
//用快慢指针遍历的同时翻转前半部分，然后与后半部分比较即可
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(!head || !head -> next)
            return true;
        ListNode *fast = head, *slow = head;
        ListNode *p = NULL, *pre = NULL;
        
        while(fast && fast -> next)
        {
            p = slow;
            slow = slow -> next;
            fast = fast -> next -> next;
            
            p -> next = pre;
            pre = p;
        }
        
        if(fast)
            slow = slow -> next;
        
        while(p)
        {
            if(p -> val != slow -> val)
                return false;
            
            p = p -> next;
            slow = slow -> next;
        }
        
        return true;
    }
};
