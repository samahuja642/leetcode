// Attempt # 1
// Brute Force 
// Searches for a odd number and searches for even in the remaining array 
// if present then swaps it 
// Idea -> No Odd Number can come before Even Number.
// Complexity Analysis 
// Space Complexity -> O(1)
// Time Complexity -> O(N^2)

// Code
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]%2!=0){
                for(int j=i+1;j<nums.size();j++){
                    if(nums[j]%2==0){
                        swap(nums[i],nums[j]);
                    }
                }                
            }
        }
        return nums;
    }
};

// Attempt # 2
// Two pointer Approach 
// Idea is same for this one too.
// Complexity Analysis
// Space Complexity -> O(1)
// Time Complexity -> O(N^2)

// Code
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int left = 0;
        int right = nums.size()-1;
        while(left<right){
            while(left<nums.size() && nums[left]%2==0){
                left++;
            }
            while(right>=0 && nums[right]%2!=0){
                right--;
            }
            if(left<nums.size() && right>=0 && left<right)swap(nums[left],nums[right]);
            left++;
            right--;
        }
        return nums;
    }
};
