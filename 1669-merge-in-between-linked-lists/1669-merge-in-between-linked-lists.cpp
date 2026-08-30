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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode*before=list1;
        for(int i=1;i<a;i++){
            before=before->next;
        }
        ListNode*last=list2;
        while(last->next!=NULL){
            last=last->next;
        }
        ListNode* afterb = before->next;

for(int i = a; i <= b; i++){
    afterb = afterb->next;
}
        before->next=list2;
        last->next=afterb;
        return list1;
        
    }
};