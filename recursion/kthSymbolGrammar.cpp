// Attempt # 1
// Simple Recursive Solution
// Observation was important than Recursion
// 1 -> 0
// 2 -> 0 1
// 3 -> 0 1 1 0
// 4 -> 0 1 1 0 1 0 0 1

// Code
class Solution {
public:
    int kthGrammar(int n, int k) {
        if(n==1)return 0;
        if(k<=pow(2,n-2))return kthGrammar(n-1,k);
        return !kthGrammar(n-1,k-pow(2,n-2));
    }
};
