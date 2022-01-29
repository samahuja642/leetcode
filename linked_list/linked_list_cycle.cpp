// Attempt # 1
// Used Set to store Addresses of elements which we have traveresed and if repeats that means there is a loop
// Complexity Analysis
// Space Complexity :- O(N)
// Time Complexity :- O(N^2)

// Code
class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode *>elements_trav;
        while(head!=NULL){
            if(elements_trav.find(head)!=elements_trav.end())return true;
            elements_trav.insert(head);
            head = head->next;
        }
        return false;
    }
};

// Attempt # 2
// As We Were Using Searching so we can use hashing
// Complexity Analysis 
// Space Complexity :- O(N)
// Time Complexity :- O(N)

// Code
class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_map<ListNode *,int>elements_trav;
        while(head!=NULL){
            if(elements_trav[head]==1)return true;
            elements_trav[head]=1;
            head = head->next;
        }
        return false;
    }
};
