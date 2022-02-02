// Attempt # 1
// Simple Recursive Approach using IBH Method.

class Solution
{
    public:
    void del(stack<int>&s,int k){
        if(k==1){s.pop();return;}
        int val = s.top();
        s.pop();
        del(s,k-1);
        s.push(val);
        return;
    }
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        del(s,sizeOfStack/2 + 1); 
    }
};
