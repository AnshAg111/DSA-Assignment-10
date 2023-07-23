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
    ListNode* oddEvenList(ListNode* head) {
        if(head==nullptr or head->next==nullptr or head->next->next==nullptr) return head;
        ListNode*p=head, *q=head->next, *r=head->next->next, *t=head->next;
        int i=3;
        while(r!=nullptr){
            q->next=r->next;
            p->next=r;
            r->next=t;
            p=p->next;
            q=q->next;
            for(int j=0; j<i; j++){
                r=r->next;
                if(r==nullptr) break;
            }
            i++;
        }
        return head;
    }
};