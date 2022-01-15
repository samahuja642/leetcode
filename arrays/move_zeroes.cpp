// Attempt # 1
// Brute Force 
// Complexity Analysis 
// Space Complexity -> O(1)
// Time Complexity -> O(N^2)

// Code
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                for(int j=i;j<nums.size();j++){
                    if(nums[j]!=0){
                        swap(nums[i],nums[j]);
                        break;
                    }
                }
            }
        }
    }
};

// Attempt # 2
// kind of again two pointer but can be observed without using it too.
// Complexity Analysis
// Space Compexity -> O(1)
// Time Complexity -> O(N)

// Code
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)count++;
        }
        int var = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[var]=nums[i];
                var++;
            }
        }
        for(int i=nums.size()-count;i<nums.size();i++){
            nums[i]=0;
        }
    }
};
