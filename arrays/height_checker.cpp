// Attempt # 1
// Basically I have done simple sorting and then comparing it with the original array.
// Complexity Analysis
// Space Complexity -> O(N)
// Time Complexity -> O(N)

// Code
class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>predicted = heights;
        sort(predicted.begin(),predicted.end());
        int count = 0;
        for(int i=0;i<heights.size();i++){
            if(predicted[i]!=heights[i])count++;            
        }
        return count;
    }
};

You Need to Do its Merge Sort Approach.
