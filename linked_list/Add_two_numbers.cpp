// Attempt # 1
// carry , cal -> sum , and updating them everytime.
// 
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode * result;
        ListNode * temp;
        int carry=0;
        int cal = (l1->val + l2->val)%10;
        carry = (l1->val + l2->val)/10;
        result = new ListNode(cal);
        temp = result;
        l1 = l1->next;
        l2 = l2->next;
        while(l1 && l2){
            cal = (l1->val + l2->val + carry)%10;
            carry = (l1->val + l2->val +carry)/10;
            temp->next = new ListNode(cal); 
            temp = temp->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        if(l1){
            while(l1 || carry!=0){
                if(l1){
                    cal = (l1->val + carry)%10;
                    carry = (l1->val +carry)/10;
                    temp->next = new ListNode(cal);
                    temp = temp->next;
                    l1 = l1->next;
                }
                else{
                    temp->next = new ListNode(carry);
                    carry=0;
                }
            }
        }
        else{
            while(l2 || carry!=0){
                if(l2){
                    cal = (l2->val + carry)%10;
                    carry = (l2->val +carry)/10;
                    temp->next = new ListNode(cal);
                    temp = temp->next;
                    l2 = l2->next;
                }
                else{
                    temp->next = new ListNode(carry);
                    carry=0;
                }
            }
        }
        return result;
    }
};
