// Attempt # 1
// Simple Recursive Approach Using IBH Method.

// Code
void insert(stack<int>&s,int val){
    if(s.size()==0){
        s.push(val);return;
    }
    int temp = s.top();
    s.pop();
    insert(s,val);
    s.push(temp);
    return;
}
void reverseStack(stack<int> &stack) {
    if(stack.size()==0)return;
    int val = stack.top();stack.pop();
    reverseStack(stack);
    insert(stack,val);
    return;
}
