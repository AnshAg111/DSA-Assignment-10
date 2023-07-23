/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int v) {
        while(head!=nullptr and head->val==v){
            ListNode*node=head;
            head=head->next;
            node->next=nullptr;
        }
        if(head==nullptr) return head;
        ListNode*p=head, *q=head->next;
        while(q!=nullptr){
            if(q->val==v) p->next=q->next;
            else p=p->next;
            q=q->next;
        }
        return head;
    }
};