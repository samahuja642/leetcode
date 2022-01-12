class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int even_count = 0;
        for(int i=0;i<nums.size();i++){
            if(to_string(nums[i]).length()%2==0){
                even_count++;
            }
        }
        return even_count;
    }
};
