// Attempt # 1
// Simple Brute Force Approach is to when you encounter the val we will remove that element.
// Complexity Analysis
// Space Complexity -> O(1)
// Time Complexity -> O(N^2) Reason (erase's worst case complexity can be O(N) that's why) 

// Code
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for(auto it = nums.begin();it!=nums.end();it++){
            if(*it==val){nums.erase(it);it--;}
        }
        return nums.size();
    }
};

// Attempt # 2
// Yeah Again Two Pointer Problem as you might guessed it by left and right;
// So what we are doing with left is that finding a number which is equal to val.
// With right we are finding a number which is not equal to val for the end of the array.
// Then If we are able to find both , Then Just swap them.
// By this all the elements having value val will at the last of the array which we can ignore as we will returning size.
// Complexity Analysis
// Space Complexity -> O(1)
// Time Complexity -> O(N)

// Code
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int left = 0;
        int right = nums.size()-1;
        while(left<=right){
            while(left<=right && nums[right]==val){
                right--;
            }
            while(left<=right && nums[left]!=val){
                left++;
            }
            if(left<=right)swap(nums[left],nums[right]);
        }
        return right+1;
    }
};
