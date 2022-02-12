// Attempt # 1
// traversing the list and if child is not null then making a recursive call
// then recursive call gives back flatten child linkedlist's head 
// then making required changes and going back to the end of the list and start checking again
// Complexity Analysis
// Space Complexity -> not O(1) 
// Time Complexity -> O(N) where N is Number of Nodes
// Doubt -> Calculating Complexity for Recursive Algorithms is very difficult for me , specially Space Complexity
// Diagram -> https://github.com/samahuja642/leetcode/blob/main/linked_list/extras/Flatten_Multilevel_dll.svg

// Code
class Solution {
public:
    Node* flatten(Node* head) {
        Node * head_new = head;
        Node * temp = head;
        while(temp){
            if(temp->child){
                Node * headflat = flatten(temp->child);
                Node * tempo = temp->next;
                temp->next = headflat;
                headflat->prev = temp;
                while(temp->next){
                    temp = temp->next;
                }
                temp->next = tempo;
                if(tempo)tempo->prev = temp;
                temp = temp->next;
            }
            else{
                temp = temp->next;
            }
        } 
        temp = head_new;
        while(temp){
            temp->child = NULL;
            temp = temp->next;
        }
        return head_new;
    }
};
