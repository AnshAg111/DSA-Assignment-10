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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int c=0, no=0;
        ListNode*p=head;
        while(p!=nullptr){
            p=p->next;
            c++;
        }
        if(c==n) {
            return head->next;
        }
        p=head;
        while(p!=nullptr){
            no++;
            if(c-n==no){
                p->next=p->next->next;
                break;
            }
            p=p->next;
        }
        return head;
    }
};