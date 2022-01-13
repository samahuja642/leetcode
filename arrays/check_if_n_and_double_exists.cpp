// Attempt # 1
// Simple brute force searching for a element which is divisible by 2 and then element's half in the whole array.
// Complexity Analysis
// Space Complexity -> O(1)
// Time Complexity -> O(N^2)

// Code
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        for(int i=0;i<arr.size();i++){
            if(arr[i]%2==0){
                for(int j=0;j<arr.size();j++){
                    if(i!=j && arr[j]==arr[i]/2){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};

// Attempt # 2
// Basically One important thing we can see from brute force approach is that we are searching for an element.
// But that is linear searching can't we perform better in searching.
// Yeah we can using Hashing or Dictionaries in Python.
// Complexity Analysis
// Space Complexity -> O(N)
// Time Complexity -> O(N) 
// Probably best case for time Complexity , but not for space complexity.

// Code
// class Solution {
// public:
//     bool checkIfExist(vector<int>& arr) {
//         unordered_map<int,int>hashmap;
//         for(int i=0;i<arr.size();i++){
//             hashmap[arr[i]]++;
//         }
//         for(int i=0;i<arr.size();i++){
//             if(arr[i]%2==0){
//                 if(arr[i]==0 && hashmap[arr[i]]>=2)return true;
//                 else if(arr[i]!=0 && hashmap[arr[i]/2]>0)return true;
//             }
//         }
//         return false;
//     }
// };

// Attempt # 3
// So we want two things :- 
// 1. Fast Searching 
// 2. No Extra Space 
// So here we can use Binary Search as it doesn't require extra space.
// But we need Sorted array for that but if do that then indexes will be shifted (for this question it doesn't matter)
// Complexity Analysis 
// Space Complexity -> O(1)
// Time Complexity -> O(N log N)

// Code 
// class Solution {
// public:
//     int binary_search(vector<int>& arr,int val){
//         int start = 0;
//         int end = arr.size()-1;
//         int mid = (start + end) / 2;
//         while(start<=end){
//             if(arr[mid]==val)return mid;
//             else if(arr[mid]<val)start = mid + 1;
//             else end = mid -1;
//             mid = (start + end) / 2;
//         }
//         return -1;
//     }
//     bool checkIfExist(vector<int>& arr) {
//         sort(arr.begin(),arr.end());
//         for(int i=0;i<arr.size();i++){
//             if(arr[i]%2==0 && binary_search(arr,arr[i]/2)!=i && binary_search(arr,arr[i]/2)!=-1)return true;
//         }
//         return false;
//     }
// };
