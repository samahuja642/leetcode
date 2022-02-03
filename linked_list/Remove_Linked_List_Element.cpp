// Attempt # 1
// Simple Brute Force Approach
// Complexity Analysis
// Space Complexity -> O(1)
// Time Complexity -> O(N)

// Code
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode * prev=NULL;
        ListNode * temp=head;
        while(temp!=NULL){
            if(temp->val == val){
                if(prev!=NULL){
                    prev->next = temp->next;
                    temp = temp->next;
                }
                else{
                    head = head->next;
                    temp = head;
                }
            }
            else{
                prev = temp;
                temp = temp->next;
            }
        }
        return head;
    }
};
