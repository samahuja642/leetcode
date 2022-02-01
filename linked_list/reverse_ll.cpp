// Attempt # 1
// Basically at every Node i am changing its next pointer to the previous pointer.
// Complexity Analysis 
// Space Complexity -> O(1)
// Time Complexity -> O(N)

// Code 
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL)return NULL;
        ListNode * prev = NULL;
        ListNode * curr = head;
        while(curr->next!=NULL){
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }curr->next = prev;
        return curr;
    }
};
