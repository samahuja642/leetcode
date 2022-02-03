// Attempt # 1
// Simply By Breaking links and making New Links
// Complexity Analysis
// Space Complexity -> O(1)
// Time Complexity -> O(N)

// Code
class Solution {
public:
    ListNode* ifexists(ListNode* ptr){
        if(ptr==NULL)return NULL;
        return ptr->next;
    }
    ListNode* oddEvenList(ListNode* head) {
        ListNode* tempA = head;
        ListNode* tempB = ifexists(head);
        ListNode*headB = ifexists(head);
        while(tempA!=NULL || tempB!=NULL){
            tempA->next = ifexists(tempA->next);
            if(tempB!=NULL)tempB->next = ifexists(tempB->next);
            if(tempA->next==NULL)break;
            tempA = ifexists(tempA);
            tempB = ifexists(tempB);
        }
        if(tempA!=NULL)tempA->next = headB;
        return head;
    }
};
