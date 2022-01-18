// Attempt # 1
// Brute Force 
// Complexity Analysis 
// Space Complexity -> O(1)
// Time Complexity -> O(N^2)

// Code
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = nums.size();
        for(int i=0;i<count;i++){
            if(nums[i]==val){
                count--;
                for(int j=i+1;j<nums.size();j++){
                    swap(nums[j-1],nums[j]);
                }
                i--;
            }
        }
        return count;
    }
};

// Attempt # 2
// Brute Force With STL
// Complexity Analysis 
// Space Complexity -> O(1)
// Time Complexity -> O(N^2)

// Code
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for(auto it=nums.begin();it!=nums.end();it++){
            if(*it==val){
                nums.erase(it);
                it--;
            }
        }
        return nums.size();
    }
};

// Attempt # 3
// Two Pointer
// Simply if i Know the size after removal of the value then you can just insert the values from the leftmost.
// Complexity Analysis 
// Space Complexity -> O(1)
// Time Complexity -> O(N)

// Code
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count_val = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                count_val++;
            }
        }
        int left = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                nums[left]=nums[i];
                left++;
            }
        }
        return count_val;
    }
};
