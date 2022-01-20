class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        int left = 0;
        int i = 0;
        while(left<2 && i<nums.size()){
            while(i<nums.size()-1 && nums[i]==nums[i+1]){
                i++;
            }
            i++;
            left++;
        }
        return (left==2 && i<nums.size())?nums[i]:nums[0];
    }
};

// May be O(N) is a question of radix sort or counting sort will be doing them when i will be done with them.
