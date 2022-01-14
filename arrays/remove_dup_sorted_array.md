// Attempt # 1
// Hard Brute force approach for me as it is playing with iterators very badly.
// For some taste you should think why it-- after the loop.
// Complexity Analysis 
// Space Complexity -> O(1)
// Time Complexity -> O(N^2)

// Code
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        for(auto it = nums.begin();it!=nums.end();it++){
            int var = *it;
            it++;
            while(it!=nums.end() && var==*it){
                nums.erase(it);
            }
            it--;
        }
        return nums.size();
    }
};

// Attempt # 2
// Lol :xd what again Two Pointer
// First we are calculating size of array if duplicates were not there which we have calculated using right.
// Then left to assign distinct values to it.
// Complexity Analysis
// Space Complexity -> O(1)
// Time Complexity -> O(N)

// Code 
// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         int right = nums.size()-1;
//         for(int i=1;i<nums.size();i++){
//             if(nums[i-1]==nums[i]){
//                 right--;
//             }
//         }
//         int left = 1;
//         for(int i=1;i<nums.size();i++){
//             if(nums[i-1]!=nums[i]){
//                 nums[left] = nums[i];
//                 left++;
//             }
//         }
//         return right+1;
//     }
// };
