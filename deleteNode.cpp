/*
ʵ��һ���㷨��ɾ�����������м��ĳ���ڵ㣨���˵�һ�������һ���ڵ㣬��һ�����м�ڵ㣩���ٶ���ֻ�ܷ��ʸýڵ㡣
ʾ����
���룺��������a->b->c->d->e->f�еĽڵ�c
������������κ����ݣ����������Ϊa->b->d->e->f
��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/delete-middle-node-lcci
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