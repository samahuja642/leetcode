// Attempt # 1
// Two Pointer Approach
// Comparing two Lists until one list is empty
// Complexity Analysis 
// Space Complexity -> O(1)
// Time Complexity -> O(N)
// Link for Diagram -> https://github.com/samahuja642/leetcode/blob/main/linked_list/extras/merge_two_sorted_ll.svg

// Code
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode * listhead ;
        ListNode * temp ;
        if(!list1)return list2;
        if(!list2)return list1;
        if(list1->val >= list2->val){
            listhead=list2;
            temp = listhead;
            list2=list2->next;
        }
        else{
            listhead = list1;
            temp = listhead;
            list1 = list1->next;
        }
        while(list1 && list2){
            if(list1->val>=list2->val){
                listhead->next = list2;
                listhead = listhead->next;
                list2=list2->next;
            }
            else{
                listhead->next = list1;
                listhead = listhead->next;
                list1 = list1->next;
            }
        }
        while(list1){
                listhead->next = list1;
                listhead= listhead->next;
                list1=list1->next;
            }
        while(list2){
                listhead->next = list2;
                listhead= listhead->next;
                list2=list2->next;
            }
        return temp;
    }
};
