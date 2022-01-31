// Attempt # 1
// Simple Approach Using HashTable
// Complexity Analysis
// Space Complexity -> O(N)
// Time Complexity -> O(N+M)

// Code
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode *,int>hashmap;
        while(headA!=NULL){
            hashmap[headA]=1;
            headA = headA->next;
        }
        while(headB!=NULL){
            if(hashmap[headB]==1)return headB;
            headB = headB->next;
        }
        return NULL;
    }
};

// Attempt # 2
// Floyd Algorithm by Changing the list and making it same again.
// Complexity Analysis
// Space Complexity -> O(1)
// Time Complexity -> O(M+N)
// Diagram -> https://github.com/samahuja642/leetcode/blob/main/linked_list/extras/intersection%20of%20linkedlist.svg

// Code
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp = headA;
        while(headA->next!=NULL){
            headA = headA->next;
        }
        headA->next = temp;
        ListNode* slow = headB;
        ListNode* fast = headB;
        do{
            slow = slow->next;
            if(fast->next!=NULL){
                fast = fast->next->next;
            }
            else{
                fast = NULL;
            }
        }while(fast!=NULL && fast!=slow); 
        if(fast!=NULL){
            slow = headB;
            while(slow!=fast){
                slow = slow->next;
                fast = fast->next;
            }
        }
        headA->next = NULL;
        if(slow == fast)return slow;
        return NULL;
    }
};

// Attempt # 3
// making their sizes equal by advancing the bigger one linked list.
// Complexity Analysis
// Space Complexity -> O(1)
// Time Complexity -> O(N+M)

// Code
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int countA = 0;
        int countB = 0;
        ListNode* temp = headA;
        while(temp!=NULL){
            temp = temp->next;
            countA++;
        }
        temp = headB;
        while(temp!=NULL){
            temp = temp->next;
            countB++;
        }
        if(countA>countB){
            for(int i=0;i<countA-countB;i++){
                headA = headA->next;
            }
        }
        else{
            for(int i=0;i<countB-countA;i++){
                headB = headB->next;
            }
        }
        while(headA!=NULL && headA!=headB){
            headA = headA->next;
            headB = headB->next;
        }
        return headA;
    }
};
