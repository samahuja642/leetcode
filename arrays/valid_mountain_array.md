// Attempt # 1
// We are checking a valid mountain using two while loops
// one checking for monotonically increasing and one decreasing.
// then comparing the size with index at the last.
// Complexity Analysis 
// Space Complexity -> O(1)
// Time Complexity -> O(N)

// Code
class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int i=1;
        if(i==arr.size())return false;
        while(arr[i]>arr[i-1]){
            i++;
        }
        if(i==1)return false;
        if(i==arr.size())return false;
        while(i<arr.size() && arr[i]<arr[i-1]){
            i++;
        }
        if(i==arr.size())return true;
        return false;
    }
};
