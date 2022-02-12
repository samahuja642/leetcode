// Attempt # 1
// Brute Force 
// Complexity Analysis
// Space Complexity -> O(1)
// Time Complexity -> O(N*(k%size))

// Code
class Solution {
public:
    ListNode* func(ListNode* head){
        ListNode * curr = head;
        ListNode * prev = NULL;
        while(curr->next){
            prev = curr;
            curr = curr->next;
        }
        prev->next = NULL;
        curr->next = head;
        head = curr;
        return head;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head||!head->next)return head;
        ListNode *temp = head;
        int size = 0;
        while(temp){
            size++;
            temp = temp->next;
        }
        k = k % size;
        while(k){
            head = func(head);
            k--;
        }
        return head;
    }
};
