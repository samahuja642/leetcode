// Attempt # 1
// Simply By calculating size of linked list and then traversing till the previous node from deletion node and then remove the connection.
// May be I can deal with edge cases in a better way.
// Complexity Analysis 
// Space Complexity -> O(1)
// Time Complexity -> O(N)

// Code
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int size = 0;
        while(temp!=NULL){
            temp = temp->next;
            size++;
        }
        temp = head;
        for(int i=1;i<size-n;i++){
            temp = temp->next;
        }
        if(size-n==0)return head->next;
        if(temp->next==NULL && size==1){
            return NULL;
        }
        temp->next = temp->next->next;
        return head;
    }
};
