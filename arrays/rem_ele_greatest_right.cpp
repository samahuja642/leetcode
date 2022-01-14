// Attempt # 1
// Brute Force Approach
// Simply we are traversing through the array and then we search max element in the remaining array and put the value at current index.
// Complexity Analysis 
// Space Complexity -> O(1)
// Time Complexity -> O(N^2)

// Code
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        for(int i=0;i<arr.size()-1;i++){
            int temp=arr[i+1];
            for(int j=i+1;j<arr.size();j++){
                temp = max(arr[j],temp);
            }
            swap(arr[i],temp);
        }
        arr[arr.size()-1]=-1;
        return arr;
    }
};

// Attempt # 2
// Traversing from the last and putting max from right for every position.
// Then Comparing it to the right element and max at the right position and then putting maximum value at that index.
// Complexity Analysis 
// Space Complexity -> O(N)
// Time Complexity -> O(N)

// Code 
// class Solution {
// public:
//     vector<int> replaceElements(vector<int>& arr) {
//         vector<int>ans(arr.size());
//         for(int i=arr.size()-2;i>=0;i--){
//             ans[i] = max(arr[i+1],ans[i+1]);
//         }
//         ans[arr.size()-1]=-1;
//         return ans;
//     }
// };

// Attempt # 3
// But don't you think we only need two variable for maximum till right and then a temporary variable to store as we will be changing its value at every point.
// Are you thinking why temporary variable ?
// Good Question think upon it.
// Because right elements value is getting changed so we can't compare it with it.
// Complexity Analysis 
// Space Complexity -> O(1)
// Time Complexity -> O(N)

// Code
// class Solution {
// public:
//     vector<int> replaceElements(vector<int>& arr) {
//         int temp = arr[arr.size()-1];
//         for(int i=arr.size()-2;i>=0;i--){
//             int temp2 = temp;
//             temp = max(arr[i],temp);
//             arr[i] = temp2;
//         }
//         arr[arr.size()-1]=-1;
//         return arr;
//     }
// };
