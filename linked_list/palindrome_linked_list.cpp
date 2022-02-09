// Attempt # 1
// Boht Time Hogya string use nhi ki bhul gya append se try karunga baad mein
// Complexity Analysis
// Space Complexity -> O(N)
// Time Complexity -> O(N^2)

// Code
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        string output;
        string reverse_output;
        while(head){
            output+=to_string(head->val);
            head = head->next;
        }
        reverse_output = output;
        reverse(reverse_output.begin(),reverse_output.end());
        if(output == reverse_output)return true;
        return false;
    }
};

// Attempt # 2
// spliting in half and reverse second half 
// then compare both
// Complexity Analysis
// Space Complexity -> O(1)
// Time Complexity -> O(N)

// Code
class Solution {
public: 
    ListNode* reverse_list(ListNode* head){
        ListNode* prev = NULL;
        while(head->next!=NULL){
            ListNode* temp = head->next;
            head->next = prev; 
            prev = head;
            head = temp;
        }
        head->next = prev;
        return head;
    }
    bool isPalindrome(ListNode* head) {
        int size = 0;
        ListNode* temp = head;
        while(temp!=NULL){
            temp=temp->next;
            size++;
        }
        if(size==1)return true;
        int index = size%2==0?size/2:size/2 + 1;
        temp = head;
        for(int i=0;i<index;i++){
            temp = temp->next;
        }
        temp = reverse_list(temp);
        while(temp!=NULL){
            if(head->val!=temp->val)return false;
            head = head->next;
            temp = temp->next;
        }
        return true;
    }
};
