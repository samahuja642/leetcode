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
