class Solution {
public:
    int kthGrammar(int n, int k) {
        if(n==1)return 0;
        if(k<=pow(2,n-2))return kthGrammar(n-1,k);
        return !kthGrammar(n-1,k-pow(2,n-2));
    }
};
