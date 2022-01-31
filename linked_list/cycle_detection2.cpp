// Attempt # 1
// Simple HashTable Approach 
// Complexity Analysis
// Space Complexity -> O(N)
// Time Complexity -> O(N)

// Code
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_map<ListNode *,int>elements_trav;
        while(head!=NULL){
            if(elements_trav[head]==1)return head;
            elements_trav[head]=1;
            head = head->next;
        }
        return NULL;
    }
};

// Attempt # 2
// Very Important (probably proof of algorithm is more important than algo itself.)
// Floyd Algorithm
// Will Be adding Notes Shortly
// Complexity Analysis 
// Space Complexity -> O(1)
// Time Complexity -> O(N)

// Code
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL)return NULL;
        ListNode *slow=head;
        ListNode *fast=head;
        do{
            slow = slow->next;
            if(fast->next!=NULL){
                fast = fast->next->next;
            }
            else{
                return NULL;
            }
        }while(slow!=fast && fast!=NULL);
        if(slow==NULL||fast==NULL)return NULL;
        slow = head;
        while(slow!=fast){
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }
};
