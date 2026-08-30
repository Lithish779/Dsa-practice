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
    ListNode* partition(ListNode* head, int x) {
       
        
        ListNode*small= new ListNode(0);
        ListNode*big= new ListNode(0);
        ListNode*smalltail=small;
        ListNode*bigtail=big;
        while(head!=NULL){
            if(head->val<x){
                smalltail->next=head;
                smalltail=smalltail->next;
            }
            else{
                bigtail->next=head;
                bigtail=bigtail->next;
            }
            head=head->next;
        }
        bigtail->next=NULL;

        ListNode*final=small->next;
        smalltail->next=big->next;
        if (small->next == NULL) {
            return big->next;
        }
        return small->next;
        


    }
};