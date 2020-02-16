/*
实现一种算法，删除单向链表中间的某个节点（除了第一个和最后一个节点，不一定是中间节点），假定你只能访问该节点。
示例：
输入：单向链表a->b->c->d->e->f中的节点c
结果：不返回任何数据，但该链表变为a->b->d->e->f
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/delete-middle-node-lcci
*/
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
    void deleteNode(ListNode* node) {
        while(node->next)
        {
            node->val = node->next->val;
            if(node->next->next)
                node = node->next;
            else
                 node->next = NULL;
        }   
    }
};