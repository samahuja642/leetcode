#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int start = 0;
        int end = arr.size()-1;
        int zeroes = 0;
        // cout<<start<<endl;
        // cout<<end<<endl;
        while(start<=end){
            if(arr[start]==0){end--;zeroes++;
            // cout<<start<<" "<<end;
            }
            // cout<<start<<" "<<end<<endl;
            start++;
        }
        int non_zeroes = start - zeroes;
        start--;
        for(int i=arr.size()-1;i>=0;i--){
            if(i==arr.size()-1 && non_zeroes+2*zeroes>arr.size()){
                arr[i]=arr[start];
            }
            else if(arr[start]==0){
                arr[i]=0;
                i--;
                arr[i]=0;
            }
            else{
                arr[i]=arr[start];
            }
            start--;
        }
        // cout<<zeroes<<endl;
        // cout<<non_zeroes<<endl;
        // cout<<arr.size()<<endl;
        // cout<<end<<endl;
        // cout<<start<<endl;
    }
};
int main(){
    Solution * obj = new Solution();
    vector<int> arr = {1,5,2,0,6,8,0,6,0};
    obj->duplicateZeros(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";	
    }
    cout<<endl;
    return 0;
}
