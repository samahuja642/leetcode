// Attempt # 1
// it would be simply sorting the whole array and returning the kth element
// Complexity Analysis 
// Time Complexity -> O(NLogN)
// Space Complexity -> O(1)

// Attempt # 2
// Using heaps 
// Complexity Analysis 
// Time Complexity -> O(NlogK)
// Space Complexity -> O(1)

// Code
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        make_heap(nums.begin(),nums.end());
        for(int i=0;i<k-1;i++){
            pop_heap(nums.begin(), nums.end());
            nums.pop_back();
        }
        return nums.front();
    }
};
