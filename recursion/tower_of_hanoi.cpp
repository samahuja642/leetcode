// Attempt # 1
// Simple Recursive Code using IBH method

// Code
class Solution{
    public:
    long long count = 0;
    long long toh(int N, int from, int to, int aux) {
        if(N==0)return count;
        count = toh(N-1,from,aux,to);
        cout<<"move disk "<<N<<" from rod "<<from<<" to rod "<<to<<endl;
        count++;
        count = toh(N-1,aux,to,from);
        return count;
    }

};
