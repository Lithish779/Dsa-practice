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
    ListNode*mergetwo(ListNode*right,ListNode*left){
        ListNode*dummy=new ListNode(-1);
        ListNode*tail=dummy;
        while(right&&left){
            if(left->val<=right->val){
                tail->next=left;
                left=left->next;
            }
            else{
                tail->next=right;
                right=right->next;
            }
            tail=tail->next;
        }
        if(left){
            tail->next=left;
        }
        else{
            tail->next=right;
        }
        return dummy->next;

    }
    ListNode*middle(ListNode*head){
        ListNode*slow=head;
        ListNode*fast=head->next;
        while(fast!=NULL&&fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
    }

    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        //find mid
        ListNode*mid=middle(head);
        //divide into two
        ListNode*right=mid->next;
        mid->next=NULL;
        //recursively sort both halves
        ListNode*left=sortList(head);
        right=sortList(right);
        //merge two sorted halves
        return mergetwo(left,right);

        
    }
};