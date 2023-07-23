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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL) return list2;
        else if(list2==NULL) return list1;
        ListNode*head;
        ListNode*p=list1;
        ListNode*q=list2;
        if(p->val>q->val){
                head=q;
                q=q->next;
            } 
        else{
                 head=p;
                 p=p->next;
            }
        ListNode*ptr=head;
        // else{
        while(p!=NULL && q!=NULL){
            
            if(p->val>q->val){
                ptr->next=q;
                q=q->next;
            } 
            else{
                 ptr->next=p;
                 p=p->next;
            }
            ptr=ptr->next;
        }
        if(p!=NULL){
            // ptr=ptr->next;
            // ptr=p;
            ptr->next=p;
        }
        if(q!=NULL){
            // ptr=ptr->next;
            // ptr=q;
            ptr->next = q;
        }
        // ptr->next=NULL;
        return head;
    }
};