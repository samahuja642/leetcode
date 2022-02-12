// Attempt # 1
// Used Hashmap to Store address and corresponding index
// Complexity Analysis 
// Space Complexity -> O(N)
// Time Complexity -> O(N^2) and depends on question which i mentioned below
// Question -> Comparing Address is O(1) ?

// Code 
class Solution {
public:
    Node* getindex(unordered_map<Node*,int>hashmap,Node *base,Node* head_new){
        int index = hashmap[base];
        Node* temp_new = head_new;
        for(int i=0;i<index;i++){
            temp_new = temp_new->next;
        }
        return temp_new;
    }
    Node* copyRandomList(Node* head) {
        if(!head)return NULL;
        Node * head_new = new Node(head->val);
        Node * temp = head;
        Node * temp_new = head_new;
        temp = temp->next;
        while(temp){
            temp_new->next = new Node(temp->val);
            temp_new = temp_new->next;
            temp = temp->next;
        }
        unordered_map<Node*,int>hashmap;
        temp = head;
        int index = 0;
        while(temp){
            hashmap[temp]=index;
            index ++;
            temp = temp->next;
        }
        hashmap[temp]=index;
        temp_new = head_new;
        temp = head;
        while(temp_new){
            temp_new->random = getindex(hashmap,temp->random,head_new);
            temp = temp->next;
            temp_new = temp_new->next;
        }
        return head_new;
    }
};
